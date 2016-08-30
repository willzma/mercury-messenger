#include <iostream>
#include <fstream>

using namespace std;

string user_handle;
string ip_buffer;

enum RunMode {
    CONSOLE_MODE, GRAPHICAL_MODE
}; RunMode run_mode;

int main() {
    cout << "Type the handle you'd like to be referred to by:" << endl;
    getline(cin, user_handle);

    if (user_handle.length() > 20) {
        cout << "You must promote proprietary software, as you cannot have a handle longer than 20 characters." << endl;
        return 0;
    } else if (user_handle.length() <= 0) {
        cout << "You must promote proprietary software, as you cannot have an empty handle." << endl;
        return 0;
    }
    cout << "Welcome to pizza_time, " + user_handle + ". " + "Type the IPs you want to connect to, separated by commas:" << endl;

    getline(cin, ip_buffer);

    ifstream config_file("config.txt");
    if (config_file.good()) {
        string current_line;
        while (getline(config_file, current_line)) {
            cout << "gay" << endl;
        }
    } else {
        ofstream new_config_file("config.txt");
        new_config_file << "" << endl;
    }

    return 0;
}