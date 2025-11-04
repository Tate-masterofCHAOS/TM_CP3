#include <iostream>

using namespace std;

enum choiceMenu {
    Add = 1,
    Subtract,
    Multiply,
    Divide,
    Leave,
};

double addition(double a, double b) { return a + b; }
double subtraction(double a, double b) { return a - b; }
double multiplication(double a, double b) { return a * b; }
double division(double a, double b) { return a / b; }

int main() {
    bool running = true;
    while (running) {
        double num1 = 0.0;
        double num2 = 0.0;
        cout << "Number 1: ";
        if (!(cin >> num1)) { cerr << "Invalid input\n"; return 1; }
        cout << "Number 2: ";
        if (!(cin >> num2)) { cerr << "Invalid input\n"; return 1; }

        cout << "What would you like to do?\n";
        cout << "1. Add\n";
        cout << "2. Subtract\n";
        cout << "3. Multiply\n";
        cout << "4. Divide\n";
        cout << "5. Exit\n";
        int choice = 0;
        if (!(cin >> choice)) { cerr << "Invalid choice\n"; return 1; }

        double result = 0.0;
        switch (choice) {
            case choiceMenu::Add:
                result = addition(num1, num2);
                cout << "Result: " << result << '\n';
                break;
            case choiceMenu::Subtract:
                result = subtraction(num1, num2);
                cout << "Result: " << result << '\n';
                break;
            case choiceMenu::Multiply:
                result = multiplication(num1, num2);
                cout << "Result: " << result << '\n';
                break;
            case choiceMenu::Divide:
                if (num2 == 0.0) {
                    cout << "Error: division by zero\n";
                } else {
                    result = division(num1, num2);
                    cout << "Result: " << result << '\n';
                }
                break;
            case choiceMenu::Leave:
                running = false;
                break;
            default:
                cout << "Unknown choice\n";
        }

        cout << '\n';
    }

    return 0;
}