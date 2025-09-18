//TM Pokemon battle project

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
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
    int mondex(){
        cout << name << " " << title << " a " << type << " and " << dualType << endl << endl << desc << endl;
        return 0;
    }
};


int main(){
    Mon mon0 = {"Larose", 5, 5, 5, 5, "", "Normal", "", ""};
    Mon mon1 = {"Luke", 5, 5, 5, 5, "The lost man mon", "Spirit", "Light", "After spending most of their life in haunted areas has infused them with many curses and possesions but unlike many spirit types they are uneffected to light and will use flashlights to blind it's prey before attacking"};
    Mon mon2 = {"Nick", 5, 5, 5, 5, "The tickler mon", "Zombie", "Humor", "While slow, they get stronger the more damage they have done. To stun their prey they will tickle...that's it"};
    Mon mon3 = {"Johnas", 5, 5, 5, 5, "The two dimensional mon", "Poletgiest", "Reprehensible", "Ever wonder who is at fault, it is this mon's fault, they are reprehensible"};
    Mon mon4 = {"Cecily", 5, 5, 5, 5, "The name stealer mon", "Fae", "Trickster", "Dave. There are many daves in the world, it is the fault of this mon, with a nasty habit of stealing and replacing names of people they meet they have many names but everyone they meet only has one, Dave."};
    Mon mon5 = {"Darius", 5, 5, 5, 5, "The presidential mon", "Political", "Spirit", "Anybody who has been within the white house would know it is unnaturally cold, the reason for that is this mon always watching over his successors and making sure the ones he doesnt like dont get re-elected"};
    Mon mon6 = {"Vincent", 5, 5, 5, 5, "The strongest climbing mon", "Climber", "Swole", "The only living mon left, it spends eternity climbing random ledges"};

    CreateWindowA("STATIC","Welcome to the Spirimons world",WS_VISIBLE | WS_CHILD | SS_CENTER,100,100,300,50,NULL,NULL,NULL,NULL);
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    Sleep(3000);

    return 0;
}