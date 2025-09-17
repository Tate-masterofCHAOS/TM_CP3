

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
    int mondex(){
        cout << name << " " << title << " a " << type << "and " << dualType << endl << endl << desc << endl;
    }
};


int main(){
    Mon bossmon;
    bossmon.name = "Larose";
    bossmon.ATK = 5;
    bossmon.DEF = 5;
    bossmon.SPD = 5;
    bossmon.agility = 5;
    bossmon.title = "";
    bossmon.type = "Normal";
    bossmon.dualType = "";
    bossmon.desc = "";
    bossmon.mondex();
    
    Mon mon1;
    mon1.name = "Luke";
    mon1.ATK = 5;
    mon1.DEF = 5;
    mon1.SPD = 5;
    mon1.agility = 5;
    mon1.title = "The lost man mon";
    mon1.type = "Spirit";
    mon1.dualType = "Light";
    mon1.desc = "After spending most of their life in haunted areas has infused them with many curses and possesions but unlike many spirit types they are uneffected to light and will use flashlights to blind it's prey before attacking";
    mon1.mondex();

    Mon mon2;
    mon2.name = "Nick";
    mon2.ATK = 5;
    mon2.DEF = 5;
    mon2.SPD = 5;
    mon2.agility = 5;
    mon2.title = "The tickler mon";
    mon2.type = "Zombie";
    mon2.dualType = "Humor";
    mon2.desc = "While slow, they get stronger the more damage they have done. To stun their prey they will use their special attack 'Ticklish spot' to locate and exploit your tickle spot.";
    mon2.mondex();

    Mon mon3;
    mon3.name = "Johnas";
    mon3.ATK = 5;
    mon3.DEF = 5;
    mon3.SPD = 5;
    mon3.agility = 5;
    mon3.title = "The two dimensional mon";
    mon3.type = "Poletgiest";
    mon3.type = "Reprehensible";
    mon3.desc = "Ever wonder who is at fault, it is this mon's fault, they is reprehensible";
    mon3.mondex();

    Mon mon4;
    mon4.name = "Cecily";
    mon4.ATK = 5;
    mon4.DEF = 5;
    mon4.SPD = 5;
    mon4.agility = 5;
    mon4.title = "The name stealer mon";
    mon4.type = "Fae";
    mon4.dualType = "Trickster";
    mon4.desc = "Dave. There are many daves in the world, it is the fault of this mon, with a nasty habit of stealing and replacing names of people they meet they have many names but everyone they meet only has one, Dave.";
    mon4.mondex();

    Mon mon5;
    mon5.name = "Darius";
    mon5.ATK = 5;
    mon5.DEF = 5;
    mon5.SPD = 5;
    mon5.agility = 5;
    mon5.title = "The presidential mon";
    mon5.type = "Political";
    mon5.dualType = "Spirit";
    mon5.desc = "Anybody who has been within the white house would know it is unnaturally cold, the reason for that is this mon always watching over his successors and making sure the ones he doesnt like dont get re-elected";
    mon5.mondex();

    Mon mon6;
    mon6.name = "Vincent";
    mon6.ATK = 5;
    mon6.DEF = 5;
    mon6.SPD = 5;
    mon6.agility = 5;
    mon6.title = "The strongest climbing mon";
    mon6.type = "Climber";
    mon6.dualType = "Swole";
    mon6.desc = "The only living mon left, gone crazy and spends eternity climbing random ledges";
    mon6.mondex();
    return 0;

    Mon mon7;
    mon7.name = "Tate";
    mon7.ATK = 5;
    mon7.DEF = 5;
    mon7.SPD = 5;
    mon7.agility = 5;
    mon7.title = "The masked mon";
    mon7.type = "Trickster";
    mon7.dualType = "Poletgiest";
    mon7.desc = "A tricky mon that lives deep within the minds of others and uses them to do their bidding";
    mon7.mondex();
}