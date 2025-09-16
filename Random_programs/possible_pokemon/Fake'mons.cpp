

#include <iostream>
#include <string>


using namespace std;


struct Mon{ 
    string name;
    int ATK;
    int DEF;
    int SPD;
    int agility;
    string title;
    string type;
    string dualType = "none";
    string desc;
};


int main(){
    Mon mon1 = {"Fred", 5, 5, 5, 5, "The lost man Fakemon", "Spirit", "Light", "Spending his time in haunted areas has infused him with many curses and possesions, unlike many spirit types he is ammune to light and will use light against other Fakemon"};
    cout << mon1.name << mon1.title << " a " << mon1.type << "and " << mon1.dualType << endl << mon1.desc;
    return 0;
}