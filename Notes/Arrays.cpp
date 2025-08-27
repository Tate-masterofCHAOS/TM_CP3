// TM Arrays Notes

#include <iostream>


using namespace std;  

string fam[12] = {"Owen", "Unborn Child", "Tate", "Kasie", "Charlie", "Daphne", "Della", "Kinzie", "Avery", "Amy", "Clayton", "Bubba"};
string sibs[2] = {"Owen", "Unborn Child"};

void search(string list, string item){
    cout << list << endl;
}


int main(){
    for(int i=0;i < size(fam);i++){
        cout << fam[i] << "\n";
        if (fam[i] == sibs[i]){
            cout << "They are my sibling\n";
        }
    }


    return 0;
}

//How are for loops constructed in C++
    //for(int i=0;size(fam);i++){
        
    //} if one line no need for {}
//When do you need to use curly brackets in C++
    //
//How do you compare items in arrays
    //
//How do you use an array as an argument in a function
    //
//What is type_t
    //
//Why would we use type_t
    //
//How do you search an array
    //
//How do you sort an array
    //
//How do you make a multi-dimensional array
    //