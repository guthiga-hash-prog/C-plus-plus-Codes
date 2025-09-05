#include <iostream>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>
#include <sstream>   // for std::istringstream


// Function to run a command and capture its output
std::string runCommand(const std::string &cmd) {
    std::string result;
    char buffer[256];
    FILE *pipe = _popen(cmd.c_str(), "r");  // Windows uses _popen
    if (!pipe) throw std::runtime_error("popen() failed!");
    while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
        result += buffer;
    }
    _pclose(pipe);
    return result;
}

int main() {
    try {
        // Get all Wi-Fi profiles
        std::string profilesOutput = runCommand("netsh wlan show profiles");

        // Read line by line
        std::istringstream profilesStream(profilesOutput);
        std::string line;

        while (std::getline(profilesStream, line)) {
            if (line.find("All User Profile") != std::string::npos) {
                // Extract profile name after ':'
                size_t pos = line.find(":");
                if (pos == std::string::npos) continue;
                std::string profile = line.substr(pos + 1);
                // trim spaces
                while (!profile.empty() && isspace(profile.front())) profile.erase(profile.begin());
                while (!profile.empty() && isspace(profile.back())) profile.pop_back();

                // Get Wi-Fi password for this profile
                std::string cmd = "netsh wlan show profile name=\"" + profile + "\" key=clear";
                std::string passwordOutput = runCommand(cmd);

                std::istringstream passwordStream(passwordOutput);
                std::string pline;
                bool found = false;

                while (std::getline(passwordStream, pline)) {
                    if (pline.find("Key Content") != std::string::npos) {
                        size_t pos2 = pline.find(":");
                        std::string password = (pos2 != std::string::npos) ? pline.substr(pos2 + 1) : "";
                        while (!password.empty() && isspace(password.front())) password.erase(password.begin());
                        while (!password.empty() && isspace(password.back())) password.pop_back();
                        std::cout << "Profile: " << profile << ", Password: " << password << "\n";
                        found = true;
                    }
                }

                if (!found) {
                    std::cout << "Profile: " << profile << ", Password: [None Found]\n";
                }
            }
        }
    } catch (const std::exception &ex) {
        std::cerr << "Error: " << ex.what() << "\n";
    }

    return 0;
}
