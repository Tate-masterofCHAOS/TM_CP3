//TM CP3 Binary searching notes

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
/* Convert data types to string
istringstream => reading a string
ostringstream +> write a string
stringstream => both
*/

using namespace std;

string to_string(double number, int precision){
    stringstream stream;
    stream << fixed << setprecision(2) << number << endl;
    return stream.str();
}

struct Movie{
    string movie;
    int date;
};

Movie parseMovi(string str){
    stringstream stream;
    stream.str();
}
int main(){
    double number = 3.14;
    cout << to_string(number, 2);

    //parsing
    string users = "10 20";
    stringstream stream;
    stream.str(users);
    int first;
    stream >> first;

    int second;
    stream >> second;

    cout << "first: " << first << endl << "Second: " <<  second << endl;

    auto movie = parseMovi("Star Wats: A New Hope,1977");
    cout << movie.movie << endl << movie.date << endl;

    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::app);
    if(file.is_open()){


        file.close();
    }

    return 0;
}



/*What is a potential issue with converting values to strings without control?
    It will add extra zeroes and we cannot change formatting
How can you control the way a value is converted to a string?
    stringstream will help you control how things will be converted into a string
Why is it useful to create a reusable function for converting values to strings?
    It is useful so you od not to redo it every time it is a needed function ffor many programs
What is parsing in the context of working with strings?
    Extracting a piece of information from a string
How do you extract specific information from a string in programming?
    string users = "10 20";
    stringstream stream;
    stream.str(users);
    int first;
    stream >> first;

    int second;
    stream >> second;

    cout << "first: " << first << endl << "Second: " <<  second;
When a title contains a space, which function should you use to read it properly?

Why might extra zeros be added to a string when converting a value without control?

How does controlling the string conversion process benefit your program?

Give an example scenario where parsing a string would be necessary in a program.

When writing to a binary file, what does the first parameter (reinterpret_cast<char*>(&numbers)) represent?

Why does the binary file only take 12 bytes while the array of integers might be larger?

What is the main difference between sequential search and binary search?

In which type of data structure is binary search most efficient?

What is a key requirement for binary search to work correctly on a list?

How does sequential search find an item in a list?

Why is binary search generally faster than sequential search for large, sorted lists?

*/
    

