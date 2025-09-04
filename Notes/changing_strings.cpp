// TM changing strings notes

#include <iostream>
#include <string>
using namespace std;

string name = "tate Morgan";
string sentence = "Jovial zebras quickly vexed my big friend Chuck.";

int main(){
    auto index = name.find(' ');
    string first_name = name.substr(0,index);
    string last_name = name.substr(index+1);
    first_name[0] = toupper(first_name[0]);
    //tolower()
    cout << first_name << endl << last_name << endl;

    int length = size(sentence);
    for(int i=0; i < length;i++){
        if(isspace(sentence[i])){
            sentence[i] = '^';
        }else if(isupper(sentence[i])){
            sentence[i] = '*';
        }else{
            sentence[i] = char((int(sentence[i]) + 4) % 26 + 97);
        }
    }

    cout << sentence << endl;
    
    cout << "This is a \"Question\"\n\t. . . I think?" << endl;
    return 0;
}









//How do I get a substring from within a string?
    //substr(starting_index, length)
//How do I create an escape character in C++
    // \
//How do I convert a string to another data type?
    // stoi(), stod(), stof(), to_string()
//What is a raw string and when would I use it?
    //A raw string is a string that prints everytrhing as is useful for strings with many escape characters and we make it with R"( ... )""