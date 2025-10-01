// TM Text files notes

#include <iostream>
#include <limits>
#include <fstream>
#include <iomanip>
#include <vector>

using namespace std;

struct Movie{
    int id;
    string title;
    int year;
};

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
    cout << "You entered " << first << " and " << second << endl;
/*
    ofstream ofile;
    ofile.open("data.txt");
    if(ofile.is_open()){
        ofile << setw(20) << "Hello " << setw(20) << "world";
        ofile.close();
    }
    ifstream ifile;
    ifile.open("data.txt");
    if(ifile.is_open()){
        string str;
        ifile >> str;
        cout << str;
        ifile.close();
    }

    ofile.open("data.csv");
    if(ofile.is_open()){
        ofile << "id, title, year\n"
        << "1,Terminator 1,1984\n"
        << "2,Terminator 2,1991\n";
        ofile.close();
    }
*/
    ifstream ifile;
    ifile.open("data.csv");
    string line;
    vector<Movie> movies;
    if(ifile.is_open()){
        getline(ifile, line);
        while(getline(ifile,line)){
            istringstream iss(line);
            string item;
            
            Movie movie;
            getline(iss, item, ',');
            movie.id = stoi(item);

            getline(iss, item, ',');
            movie.title = item;

            getline(iss, item, ',');
            movie.year = stoi(item);

            movies.push_back(movie);
        }
        ifile.close();
        for(Movie i: movies){
            cout << i.title << endl;
        }
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
    /*ifstream ifile;
    ifile.open("data.txt");
    if(ifile.is_open()){
        string str;
        getline(ifile, str);
        cout << str;
        ifile.close();
    }*/
//How do you read a CSV file?
    /*ifstream ifile;
    ifile.open("data.csv");
    if(ifile.is_open()){
        string str;
        getline(ifile, str);
        cout << str;
        ifile.close();
    }*/
//What is a delimiter?
    //A deliminater is a speciial character to tell when to stop and can be used in csv to show catagories
//How do you read an entire CSV?
    /*ifstream ifile;
    ifile.open("data.csv");
    if(ifile.is_open()){
    while(!ifile.eof()){
        string str;
            getline(ifile, str, ',');
            if(str.empty()) continue;
            Movie movie;
            movie.id = stoi(str);

            getline(ifile, str, ',');
            movie.title = str;

            getline(ifile, str, ',');
            movie.year = stoi(str);
            cout << str;
            ifile.close();
        }
    }
*/
//How do you turn items from a CSV into objects of a structure?
    /*getting our line
    breaking line into pieces
    saving pieces into structure
    repeating for all lines
    }*/