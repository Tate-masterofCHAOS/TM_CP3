// TM Dynamic Array


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;  

int capacity = 5;
string* indie_work = new string[capacity];
int entries = 0;

int main(){
    cout << "Hello you will be naming indie work (projects made by small groups not big associations). This can be stuff like shows (eg. The Amazing Digital Circus) or game (eg. Hollow Knight). You may enter 'quit' to quit" << endl;
    cout << "Indie Work: " << endl;
    while (true){
        
        getline(cin, indie_work[entries]);
        if(cin.fail()){
            break;
        }else if(indie_work[entries] == "quit"){
            break;
        }else{
            indie_work[entries].append(",");
        }
        
        entries++;
        if(entries == capacity){
            capacity += 5;
            
            string* temp = new string[capacity];
            for(int i = 0; i < entries; i++){
                temp[i] = indie_work[i];
            }
            delete[] indie_work;
            indie_work =  temp;
        }
    }
    
    cout <<  "YOU SAID ";
    for (int i=0; i < entries; i++){
        cout << indie_work[i] << " ";
    }
    delete[] indie_work;


    return 0;
}