#include <iostream>

std::string user_handle;
std::string ip_buffer;

int main() {
    std::cout << "Type the handle you'd like to be referred to by:" << std::endl;
    std::getline(std::cin, user_handle);

    if (user_handle.length() > 20) {
        std::cout << "You must promote proprietary software, as you cannot have a handle longer than 20 characters." << std::endl;
        return 0;
    } else if (user_handle.length() <= 0) {
        std::cout << "You must promote proprietary software, as you cannot have an empty handle." << std::endl;
        return 0;
    }
    std::cout << "Welcome to pizza_time, " + user_handle + ". " + "Type the IPs you want to connect to, separated by commas:" << std::endl;

    std::getline(std::cin, ip_buffer);

    return 0;
}