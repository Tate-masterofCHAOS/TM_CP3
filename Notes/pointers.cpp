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

int capacity = 5;
int* sanity = new int[capacity];
int entries = 0;

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
    //cout << (pnum == pday) << endl;
    //cout << (pnum < pday) << endl;
    cout << (pnum > pday) << endl;
    if (pnum != nullptr){
        cout << * pnum << endl;
        pnum++;
    }
    cout << *pnum << endl;


    
    while (true){
        cout << "Number: " << endl;
        cin >> sanity[entries];
        if(cin.fail()) break;
        entries++;
        if(entries == capacity){
            capacity += 5;
            
            int* temp = new int[capacity];
            for(int i = 0; i < entries; i++){
                temp[i] = sanity[i];
            }
            delete[] sanity;
            sanity =  temp;
        }
    }

    for (int i=0; i < entries; i++){
        cout << sanity[i] << endl;
    }
    delete[] sanity;


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
    //cout << (pnum == pday) << endl;
    //cout << (pnum < pday) << endl;
    //cout << (pnum > pday) << endl;
//What is dynamic memory allocation?
    //dynamically chaning size of an array
//What is the Stack?
    //An area of memory used for managing function calls. local variables, and control flow. It is managed by the compilerfor quick allocatiion of memory
//What is the Heap?
    //An area of memory used for dynamic memory. Stores data if the size is uknonw at the time of compiling. Memory must be manulally managed by the program. Used for flexible ;pve lived storage of complex data objects, and large files
//What are smart pointers?
    //unigue: owns that piece pf the memory allowing notjhing else to use it using classes. Shared: Can have mulitple pointers pointing at the same person