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


bool operator== (const user& first, user second ){
        return (first.name == second.name && 
            first.password == second.password && 
            first.admin == second.admin
        );
}



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
    user users[] = {user1, user2, user3, user4, user5, user6, user7, user8, user9, user10};
    cout << "Welcome to the login system, please enter your username: " << endl;
    string name;
    cin >> name;
    bool found = false;
    for(int i=0;i<10;i++){
        if(users[i].name == name){
            found = true;
            cout << "Please enter your password: ";
            string password;
            cin >> password;
            if(users[i].password == password){
                cout << "Welcome " << users[i].name << endl;
                if(users[i].admin){
                    cout << "You have admin access" << endl;
                }else{
                    cout << "You have user access" << endl;
                }
            }else{
                cout << "Incorrect password" << endl;
                cout << "Would you like to sign up?" << endl;
                string answer;
                cin >> answer;
                if(answer == "yes"){
                    cout << "Please enter a new username: ";
                    string new_name;
                    cin >> new_name;
                    cout << "Please enter a new password: ";
                    string new_password;
                    cin >> new_password;
                    user new_user = {new_name, new_password, false};
                    cout << "Account created, welcome " << new_user.name << endl;
                }
            }
        }
        else {cout << "Would you like to sign up?" << endl;
                string answer;
                cin >> answer;
                if(answer == "yes"){
                    cout << "Please enter a new username: ";
                    string new_name;
                    cin >> new_name;
                    cout << "Please enter a new password: ";
                    string new_password;
                    cin >> new_password;
                    user new_user = {new_name, new_password, false};
                    cout << "Account created, welcome " << new_user.name << endl;
                }}
    cout << "Would you like to return to main menu?" << endl;
    string answer;
    cin >> answer;
    if(answer == "yes"){
        main();
    }
    return 0;
}
}