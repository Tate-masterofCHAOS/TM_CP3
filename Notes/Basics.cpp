// TM Variables, Data Types, Inputs and Outputs

#include <iostream>
using namespace std;

int main(){
    int students = 11;
    short days = 5;
    long years = 2554l;    //long will compile to int without l at end
    const float pi = 3.141592f; //float will compile to double without f at end
    bool on = true;
    char name = 'T';
    cout << "Tell me your age ";
    int age;
    cin >> age;
    cout << "CONGRATULATIONS YOU ARE "<< age <<endl;
    cout << students/age;
    return 0;
}




//int = integer takes 4 bytes of space and is range of -2,000,000,000-2,000,000,000
//short = integer that takes 2 bytes of space -32,768-32,769
//long = sams as int
//long long = 8 bytes BIG NUMBERS
//floats = 4 bytes 3.4E38 both directions
//doubles = 8 byes 1.7E308 both directions
//long double = 8 bytes 3.4E932 both directions
//boolean = true or false
//char = 1 byte and it holds a single letter





//How are static and dynamically typed variables different?
    //On a dynamically typed language the computer just reads the variable type while static doesn't and we must tell it
//REMINDER: What is the difference between instantiating and declaring a variable?
    //Declaring is making variable instantiating is giving it a value
//What case type should be used for c++ variables?
    //Snake case
//What is the C++ standard library?
    //its the repository of all stuff that helps code
//How do you access the standard library?
    //#include <library here>
//How do you create an output in C++?
    //std::cout << ____
//How do you create an input in C++?
    //cin >>
//What is the stream in C++?
    // direction things are going, the flow of information
//What is a constant?
    //values in our program we don't want to change
//Why do we write constants?
    //to keep ourselves from changing variables that shouldn't be changed