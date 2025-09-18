// TM user login program

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;  


struct user{
    string name;
    string password;
    bool admin;
};
int main(){
    user user1 = {"Tate", "1", true};
    user user2 = {"Tat", "2", false};
    user user3 = {"Tte", "3", false};
    user user4 = {"Ate", "4", false};
    user user5 = {"Tae", "5", false};
    user user6 = {"Dave", "6", true};
    user user7 = {"Davy", "7", false};
    user user8 = {"Dae", "8", false};
    user user9 = {"Dte", "9", false};
    user user10 = {"Tavy", "10", false};
    string users[] = {user1.name, user2.name, user3.name, user4.name, user5.name, user6.name, user7.name, user8.name, user9.name, user10.name};
    string passwords[] = {user1.password, user2.password, user3.password, user4.password, user5.password, user6.password, user7.password, user8.password, user9.password, user10.password};
    bool admins[] = {user1.admin, user2.admin, user3.admin, user4.admin, user5.admin, user6.admin, user7.admin, user8.admin, user9.admin, user10.admin};
    cout << "What is your name" << endl;
    string name;
    cin >> name;
    bool found = false;
    for (int i = 0; i < 10; ++i) {
        if (users[i] == name) {
            found = true;
            string current_user = users[i];
            break;
        }
    }
    
    if (found) {
        bool found_password = false;
        cout << "What is your password" << endl;
        string password;
        cin >> password;
        for (int i = 0; i < 10; ++i) {
            if (passwords[i] == password) {
                found_password = true;
                break;
            }
        }
        if (found_password) {
        cout << "You are now logged in." << endl;
        for (int i = 0; i < 10; ++i) {
            if (users[i] == name && admins[i]) {
                cout << "You are an admin." << endl;
                break;
            }
        }
        } else {
            cout << "Incorrect password." << endl;
        }
    } else {
        cout << "User not found, would you like to sign up." << endl;
        string response;
        cin >> response;
        if (response == "yes") {
            cout << "What would you like your username to be?" << endl;
            string new_name;
            cin >> new_name;
            cout << "What would you like your password to be?" << endl;
            string new_password;
            cin >> new_password;
            cout << "You are now signed up, please restart the program to log in." << endl;
            user new_user = {new_name, new_password, false};
        } else {
            cout << "Goodbye." << endl;
        }
    }
    
    return 0;
}