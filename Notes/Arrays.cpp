// TM Arrays Notes

#include <iostream>
#include <limits>
using namespace std;  

string fam[12] = {"Owen", "Unborn Child", "Tate", "Kasie", "Charlie", "Daphne", "Della", "Kinzie", "Avery", "Amy", "Clayton", "Bubba"};
string sibs[2] = {"Owen", "Unborn Child"};

int search(string list[], int len, string item){
    for (int i=0; i < len; i++){
        if (list[i] == item){
            cout << "is MY sibling\n";
            return 1;
        }
    }
    cout << "is NOT MY sibling\n";
    return 0;
}


int main(){
    //cout << fam << endl;
    for(int i=0;i < size(fam);i++){
        cout << fam[i] << "\n";
        search(sibs, size(sibs), fam[i]);
    }
    
    // SIZE OF T
    cout << numeric_limits<long long>::min() <<endl;
    cout << numeric_limits<long long>::max() <<endl;
    cout << numeric_limits<size_t>::min() <<endl;
    cout << numeric_limits<size_t>::max() <<endl;



    //Structured binding
    auto [g, w, e, r, t, y, j, u, i, o, p, a] = fam;
    cout << e << endl;

    int matrix = {{1,2,3},
                  {4,5,6},
                  {7,8,9}};
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
    //you myst give it the size of the array
//What is type_t
    //a placeholder we use to know how much space we have
//Why would we use type_t
    //to know how much space work
//How do you search an array
    //int search(string list[], int len, string item){
        //for (int i=0; i < len; i++){
            //if (list[i] == item){
            //cout << "is MY sibling\n";
                //return 1;
            //}
        //}
        //cout << "is NOT MY sibling\n";
        //return 0;
    //}
//How do you sort an array
    //
//How do you make a multi-dimensional array
    //