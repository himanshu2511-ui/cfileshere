#include <iostream>
#include <string>

int main() {
    std::string networkName;
    std::cout << "Enter the Wi-Fi network name: ";
    std::getline(std::cin, networkName);

    std::string cmd = "netsh wlan show profile name=\"" + networkName + "\" keyMaterial";
    FILE* pipe = _popen(cmd.c_str(), "r");
    if (!pipe) {
        std::cout << "Could not open pipe.\n";
        return 1;
    }

    char buffer[128];
    std::string output = "";
    while (!feof(pipe)) {
        if (fgets(buffer, 128, pipe) != NULL)
            output += buffer;
    }

    _pclose(pipe);

    std::size_t found = output.find("Key Content");
    if (found != std::string::npos) {
        std::string password = output.substr(found + 13);
        password = password.substr(0, password.find('\n'));
        std::cout << "Wi-Fi Password: " << password << std::endl;
    } else {
        std::cout << "No Wi-Fi password found for network " << networkName << std::endl;
    }

    return 0;
}