// TM Text files notes

#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>

using namespace std;

int getNumber(const string& promt){
    int num;
    while(true){
        cout << promt;
        cin >> num;
        if(cin.fail()){
            cout << "Enter a valid number!\n";
            cin.clear();
        }else break;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return num;
}
int main(){

    int first = getNumber("First: \n");
    int second = getNumber("second: \n");
    cout << "You entered " << first << " and " << second;

    ofstream file;
    file.open("data.txt");
    if(file.is_open()){
        file << setw(20) << "Hello " << setw(20) << "world";
        file.close();
    }

    file.open("data.csv");
    if(file.is_open()){
        file << "id, title, year\n"
        << "1, Terminator 1, 1984\n"
        << "2, Terminator 1, 1991\n";
        file.close();
    }
    /*
    ifstream > input files stream
    ofstream < output file stream
    fstream >< combines both
    */
    return 0;
}


//What are the 3 main sources of data for a program
    //1. Terminal - cout, cin (user given)
    //2. Files - txt, csv, binary
    //3. Network - internet, other computers
//What are streams?
    //A source of data or destination
//What are the different streams we might need to include in a program? 
    //istream
    //ostream
    //ifstream
    //ofstream
    //fstream
//What is the base class for all streams?
    //ios base
//What is buffer?
    //A temporary storage in memory to hold data
//How do you clear the buffer?
    //cin.ignore()
//How do you handle invalid inputs from the terminal
    //if(cin.fail()){
//What streams are for files specifically  
    //ifstream > input files stream
    //ofstream < output file stream
    //fstream >< combines both
//How do you write to a text file?
    //file.open("data.txt");
    /*if(file.is_open()){
        file << "Hello Dark Abyss\n";
    }*/
//What do stream manipulators let us do?
    //manipulate formatting of how you write it to a file
//How do you write to a CSV?
    //same as text file
//How do you read a text file?
    //
//How do you read a CSV file?
    //
//What is a delimiter?
    //
//How do you read an entire CSV?
    //
//How do you turn items from a CSV into objects of a structure?
    //