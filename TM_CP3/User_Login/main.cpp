// TM user login program

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;  

int main(){
    string admin = "Billy Bob Joe";
    string users = "Tate Tat Tte Ate Tae";
    cout << "What is your name" << endl;
    string name;
    cin >> name;
    int admin_user = admin.find(name);
    if (admin_user != string::npos){
        cout << "Welcome Admin" << endl;
    }
    else{
        int user_user = users.find(name);
        if (user_user != string::npos){
            cout << "Welcome User" << endl;
        }
        else{
            cout << "You are not a user lets get you signed up " << name << endl;
        }
    }
    return 0;
}