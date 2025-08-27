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
    return 0;
}