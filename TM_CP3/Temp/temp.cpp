// TM Temperature translater

#include <iostream>
using namespace std;

int main(){
    cout << "What temperature is it in farenheight ";
    float farenheit;
    cin >> farenheit;
    float temp = farenheit - 32;
    temp = temp * 5/9;
    cout << "It is " << temp << "Degrees Celsius";
    return 0;
}