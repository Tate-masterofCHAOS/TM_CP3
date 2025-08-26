// TM Strings, arrays, and conditionals
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand() % 11;
    cout << my_num << endl;

    int grades[11] = {99,24,48,67,48,12,1,6,7,8,9};
    cout << grades[2] <<endl;

    //Strings
    string name = "Tate";
    cout << "G'day " << name << endl;
    string sentence = "Trust in clang";
    cout << sentence << endl;
    cout << sentence.length() << endl;
    cout << (name > sentence) << endl;
    // .starts_with() .end_with()
    // .empty()
    // .front()
    // .back()
    name.append(" K. Morgan");
    //name.erase();
    //name.clear(); // Makes an empter string
    int first = sentence.find("clang"); //<= beginning index of 1st occurance
    int end = first + 5;
    sentence.replace(first,end, "Koro Sensei");
    cout << name << endl;
    cout << sentence << endl;

    // Searching a string
    cout << sentence.find("Tate") << endl;
    //rfinf <= starts the search at end of string
    //.find_first_of() 
    cout << name.find("a") << endl;
    cout << name.find_first_of("a") << endl;
    //.find_last_of()
    cout << sentence.substr(0,6) << endl;
    return 0;

}


//What is Narrowing?
    //putting a larger variable in a smaller variable
//What is a basic way to generate random numbers in C++?
    //int seconds = time(nullptr);
    //srand(seconds);
    //rand();
//What is an array?
    // a list
//How do I create an array?
    // data type    name[list size] = {blah blah}
//How do you make strings in C?
    //Char name[5] = "Tate"
//How did C++ improve creating strings? 
    //C++ used pointers to help us simplify strings with preset strings
//How do I search a string?
    //.find .rfind() .find_first_of() .find_last_of()
//How do I modify a string?
    // .append
//What are some string methods? 
    //.length,  
    // .starts_with(),   .end_with()
    // .empty()
    // .front()
    // .back()