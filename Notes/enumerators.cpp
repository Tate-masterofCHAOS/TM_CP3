// TM  enumerators

#include <iostream>

using namespace std;
enum Action{
    List = 1,
    Add = 2,
    Update = 3
};

enum class Operation{
    List = 1,
    Add,
    Update
};

int main(){
    int input;

    cout <<
    "1: List invoices" << endl <<
    "2: Add invoices" << endl <<
    "3: Update invoices" << endl <<
    "Select: ";

    cin >> input;

    if (input == Action::List){
        cout << "List invoices";
    }else if(input == Action::Add){
        cout << "I haven't built this yet" << endl;
    }else if(input == Action::Update){
        cout << "Suprisingly I havent built this yet" << endl;
    }else{
        cout << "Deciever deciever i shall slash thy pantaloons with a cleaver" << endl;
    }

    return 0;
}