// TM Smart Pointers\\

#include <iostream>
#include <memory>

using namespace std;

int main(){
    unique_ptr <int> x(new int);
    unique_ptr <int> y(new int);
    *x = 10;
    *y = 7;
    cout << *x << endl;

    auto z = make_shared<int>();
    *z = 4;
    cout << "YOU SUNK MY BATTLE SHIP AT " << *x << ", " << *y << ", " << *z <<  endl;

    return 0;
}