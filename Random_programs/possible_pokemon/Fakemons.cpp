

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
    int fakedex(){
        cout << name << " " << title << " a " << type << "and " << dualType << endl << desc;
    }
};


int main(){
    Mon mon1;
    mon1.name = "Needs name";
    mon1.ATK = 5;
    mon1.DEF = 5;
    mon1.SPD = 5;
    mon1.agility = 5;
    mon1.title = "The lost man Fakemon";
    mon1.type = "Spirit";
    mon1.dualType = "Light";
    mon1.desc = "After spedning most of their life in haunted areas has infused them with many curses and possesions but unlike many spirit types they are uneffected to light and will use flashlights to blind it's prey before attacking";
    mon1.fakedex();

    Mon mon2;
    mon2.name = "Needs name";
    mon2.ATK = 5;
    mon2.DEF = 5;
    mon2.SPD = 5;
    mon2.agility = 5;
    mon2.title = "";
    mon2.type = "";
    mon2.dualType = "";
    mon2.desc = "";
    mon2.fakedex();

    return 0;
}