// TM pointers notes

#include <iostream>
#include <string>
using namespace std;


int numbers[] = {1,2,7,4,5,6,3,8,9};
void divide(int* list, int size){
    for(int i; i< size; i++){
        list[i] = list[i]/2;
        cout << list[i] << endl;
    }
    cout << "THESE ARE NUMBERS " << *numbers << endl;
}

int main(){
    int num = 4;
    int* pnum = &num;
    int day = 5;
    int month = 9;

    *pnum = 8;

    cout << "The number is " << num << endl;
    cout << "The location of num is " << pnum << endl;

    double pi = 3.141592;

    //constant pointers
    const double* ppi = &pi;
    const double gpa = 3.99999999;
    ppi = &gpa;

    int* const pday = &day;
    *pday = 6;

    const int* const pmonth = &month;

    divide(numbers, size(numbers));
    return 0;
}






















//What is a pointer?
    //a variable that holds the address of another variable
//Why do we use pointers?
    //We use these because their more efficient when dealing with larger varjables 
//How do I create a pointer
    //type* pointer_name = &variable;
//What is indirection or de-referencing?
    //Dereferencing is getting the value at the address a pointer is pointing to
//What are constant pointers? How are the different types used?
    //level 1:You can change only what a pointer points to Level 2: You can change only what a pointer points to's value Level 3: You can change absolute;y nothing
//How do you pass a pointer into a function?
    //void divide(int* numbers, int size){ 
//Why would you pass a pointer to a function?
    //sometimes you have a very large piece of data you need in your function and you dont want to copy it all into your parameter
//How do you compare pointers?
    //
//What is dynamic memory allocation?
    //
//What is the Stack?
    //
//What is the Heap?
    //
//What are smart pointers?
    //