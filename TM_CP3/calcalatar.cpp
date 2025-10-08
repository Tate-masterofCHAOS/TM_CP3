//TM CP3 calculator

#include <iostream>

using namespace std;  

enum choice{
    Add = 1,
    Subtract,
    Multiply,
    Divide,
    Leave,
},

int add(num1, num2){
    num1 = num1 + num2;
    return num1;
}

int subtract(num1, num2){
    num1 = num1 - num2;
    return num1;
}

int multiply(num1, num2){
    num1 = num1 * num2;
    return num1;
}

int divide(num1, num2){
    num1 = num1 / num2;
    return num1;
}

int main(){
    bool running = true;
    while running{
        int num1;
        int num2;
        cout << "Number 1";
        cin >> num1;
        cout << "Number 2";
        cin >> num2
        cout << "What would you like to do?" << endl;
        cout << "1. Add" << endl;
        cout << "2. Subtract" << endl;
        cout << "3. Multiply" << endl;
        cout << "4. Divide" << endl;
        cout << "5. Exit game" << endl;
        int choice;
        cin >> choice;
        if (choice == choiceMenu::Add) {
            add(num1, num2);
        }
        if (choice == choiceMenu::Subtract) {
            subtract(num1, num2);
        }
        if (choice == choiceMenu::Multiply) {
            multiply(num1, num2);
        }
        if (choice == choiceMenu::Divide) {
            divide(num1, num2);
        }
        if (choice == choiceMenu::Leave) {
            running = false;
        }
    }
    
}