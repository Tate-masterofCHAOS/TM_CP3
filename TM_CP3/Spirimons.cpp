
//TM Pokemon battle project

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <gdiplus.h>
#pragma comment (lib, "gdiplus.lib")
using namespace Gdiplus;
using namespace std;  

bool feld = false;
struct Mon{ 
    string name;
    int DEF;
    int SPD;
    int agility;
    int health;
    string title;
    string type;
    string dualType = "none";
    string desc;
    string attack1;
    string attack2;
    string attack3;
    string attack4;
    int attack1power;
    int attack2power;
    int attack3power;
    int attack4power;
    int mondex(){
        cout << name << " " << title << " a " << type << " and " << dualType << " type\n\n" << desc << endl;
        return 0;
    }
};           

struct party{
    Mon mona;
    Mon monb;
    Mon monc;
    Mon mond;
    Mon mone;
    Mon monf;

    int player_turn_mon(Mon opponent, party party){
        cout << "What do you do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Heal" << endl;
        cout << "3. Catch" << endl;
        cout << "4. Run" << endl;
        string action;
        cin >> action;
        if (action == "1") {
            cout << "what attack?" << endl;
            cout << "1. " << mona.attack1 << endl;
            cout << "2. " << mona.attack2 << endl;
            cout << "3. " << mona.attack3 << endl;
            cout << "4. " << mona.attack4 << endl;
            cin >> action;
            if (action == "1") {
                cout << mona.name << " used " << mona.attack1 << "!" << endl;
                cout << opponent.name << " took " << mona.attack1power - opponent.DEF << " damage!" << endl;
                opponent.health -= mona.attack1power;
            } else if (action == "2") {
                cout << mona.name << " used " << mona.attack2 << "!" << endl;
                cout << opponent.name << " took " << mona.attack2power - opponent.DEF << " damage!" << endl;
                opponent.health -= mona.attack2power;
            } else if (action == "3") {
                cout << mona.name << " used " << mona.attack3 << "!" << endl;
                cout << opponent.name << " took " << mona.attack3power - opponent.DEF << " damage!" << endl;
                opponent.health -= mona.attack3power;
            } else if (action == "4") {
                cout << mona.name << " used " << mona.attack4 << "!" << endl;
                cout << opponent.name << " took " << mona.attack4power - opponent.DEF << " damage!" << endl;
                opponent.health -= mona.attack4power;
            } else {
                cout << "invalid choice, you lose your turn!" << endl;
            }
        } else if (action == "2") {
            cout << mona.name << " healed 10 health!" << endl;
            mona.health += 10;
        } else if (action == "3") {
            cout << "You threw a pokeball!" << endl;
            int catch_chance = rand() % 100;
            if (catch_chance < 25) {
                cout << "You caught " << opponent.name << "!" << endl;
                if (party.mona.name == "") {
                    party.mona = opponent;
                    feld = true;
                    return feld;
                } else if (party.monb.name == "") {
                    party.monb = opponent;
                    feld = true;
                    return feld;
                } else if (party.monc.name == "") {
                    party.monc = opponent;
                    feld = true;
                    return feld;
                } else if (party.mond.name == "") {
                    party.mond = opponent;
                    feld = true;
                    return feld;
                } else if (party.mone.name == "") {
                    party.mone = opponent;
                    feld = true;
                    return feld;
                } else if (party.monf.name == "") {
                    party.monf = opponent;
                    feld = true;
                    return feld;
                } else {
                    cout << "Your party is full, you cannot catch more mon!" << endl;
                }
            } else {
                cout << opponent.name << " broke free!" << endl;
            }
        } else if (action == "4") {
            cout << "You ran away!" << endl;
            feld = true;
            return feld;
        }
    return 0;
    }
    int opponent_turn(Mon opponent, party party){
        int action = rand() % 2;
        if (action == 1) {
            int attack = rand() % 4 + 1;
            if (attack == 1) {
                cout << opponent.name << " used " << opponent.attack1 << "!" << endl;
                cout << mona.name << " took " << opponent.attack1power - mona.DEF << " damage!" << endl;
                mona.health -= (opponent.attack1power - mona.DEF);
            } else if (attack == 2) {
                cout << opponent.name << " used " << opponent.attack2 << "!" << endl;
                cout << mona.name << " took " << opponent.attack2power - mona.DEF << " damage!" << endl;
                mona.health -= (opponent.attack2power - mona.DEF);
            } else if (attack == 3) {
                cout << opponent.name << " used " << opponent.attack3 << "!" << endl;
                cout << mona.name << " took " << opponent.attack3power - mona.DEF << " damage!" << endl;
                mona.health -= (opponent.attack3power - mona.DEF);
            } else if (attack == 4) {
                cout << opponent.name << " used " << opponent.attack4 << "!" << endl;
                cout << mona.name << " took " << opponent.attack4power - mona.DEF << " damage!" << endl;
                mona.health -= (opponent.attack4power - mona.DEF);
            }
        } else if (action == 2) {
            cout << opponent.name << " healed 10 health!" << endl;
            opponent.health += 10;
        }
        return 0;
    }
    void battle_mon(Mon opponent, party party){
        cout << "A battle has started between " << mona.name << " and " << opponent.name << "!" << endl;
        opponent.health = opponent.health + (rand() % 10); //randomize opponent health a bit
        feld = false; // Reset feld at the start of battle
        while (mona.health > 0 && opponent.health > 0 && !feld) {
            cout << mona.name << " Health: " << mona.health << endl;
            cout << opponent.name << " Health: " << opponent.health << endl;
            if (mona.SPD >= opponent.SPD) {
                player_turn_mon(opponent, party);
                if (opponent.health <= 0) {
                    cout << opponent.name << " fainted!" << endl;
                    break;
                }
                else if (feld) {
                    break;
                }
                opponent_turn(opponent, party);
                if (mona.health <= 0) {
                    cout << mona.name << " fainted!" << endl;
                    break;
                }
                else if (feld) {
                    break;
                }
            } else {
                opponent_turn(opponent, party);
                if (mona.health <= 0) {
                    cout << mona.name << " fainted!" << endl;
                    break;
                }
                else if (feld) {
                    break;
                }
                player_turn_mon(opponent, party);
                if (opponent.health <= 0) {
                    cout << opponent.name << " fainted!" << endl;
                    break;
                }
                else if (feld) {
                    break;
                }
        }
        
        
    }   
}

    int player_turn_barry(Mon opponent, party party){
        cout << "What do you do?" << endl;
        cout << "1. Attack" << endl;
        cout << "2. Heal" << endl;
        cout << "3. Catch" << endl;
        cout << "4. Run" << endl;
        string action;
        cin >> action;
        if (action == "1") {
            cout << "what attack?" << endl;
            cout << "1. " << mona.attack1 << endl;
            cout << "2. " << mona.attack2 << endl;
            cout << "3. " << mona.attack3 << endl;
            cout << "4. " << mona.attack4 << endl;
            cin >> action;
            if (action == "1") {
                cout << mona.name << " used " << mona.attack1 << "!" << endl;
                cout << opponent.name << " took " << mona.attack1power - opponent.DEF << " damage!" << endl;
                opponent.health -= mona.attack1power;
            } else if (action == "2") {
                cout << mona.name << " used " << mona.attack2 << "!" << endl;
                cout << opponent.name << " took " << mona.attack2power - opponent.DEF << " damage!" << endl;
                opponent.health -= mona.attack2power;
            } else if (action == "3") {
                cout << mona.name << " used " << mona.attack3 << "!" << endl;
                cout << opponent.name << " took " << mona.attack3power - opponent.DEF << " damage!" << endl;
                opponent.health -= mona.attack3power;
            } else if (action == "4") {
                cout << mona.name << " used " << mona.attack4 << "!" << endl;
                cout << opponent.name << " took " << mona.attack4power - opponent.DEF << " damage!" << endl;
                opponent.health -= mona.attack4power;
            } else {
                cout << "invalid choice, you lose your turn!" << endl;
            }
        } else if (action == "2") {
            cout << mona.name << " healed 10 health!" << endl;
            mona.health += 10;
        } else if (action == "3") {
            cout << "You threw a pokeball!" << endl;
            cout << "EXCUSE ME THAT'S ALREADY OWNED BY...WHAT WAS HIS NAME...BARRY!" << endl;
        } else if (action == "4") {
            cout << "You ran away!" << endl;
            bool feld = true;
            return feld;
        }
    return 0;
    }
    int battle_brarry(Mon opponent, party party){
        cout << "A battle has started between " << mona.name << " and " << opponent.name << "!" << endl;
        while (mona.health > 0 && opponent.health > 0 && !feld) {
            cout << mona.name << " Health: " << mona.health << endl;
            cout << opponent.name << " Health: " << opponent.health << endl;
            if (mona.SPD >= opponent.SPD) {
                player_turn_barry(opponent, party);
                if (opponent.health <= 0) {
                    cout << opponent.name << " fainted!" << endl;
                    break;
                }
                opponent_turn(opponent, party);
                if (mona.health <= 0) {
                    cout << mona.name << " fainted!" << endl;
                    break;
                }
            } else {
                opponent_turn(opponent, party);
                if (mona.health <= 0) {
                    cout << mona.name << " fainted!" << endl;
                    break;
                }
                player_turn_barry(opponent, party);
                if (opponent.health <= 0) {
                    cout << opponent.name << " fainted!" << endl;
                    break;
                }
        }
        
        
        return 0;
    }   
}
};

Mon mon0 = {"Larose",0, 5, 5, 5, "", "Normal", "Fae", "Youre adding descriptions to them?", "Sarcasm", "Lightsaber", "Bad grade", "Tangent", 5, 5, 999, 0};
Mon mon1 = {"Wanderer", 0,5, 10, 10, "The lost man mon", "Spirit", "Light", "After spending most of their life in haunted areas has infused them with many curses and possesions but unlike many spirit types they are uneffected to light and will use flashlights to blind it's prey before attacking", "Splish", "Splash", "Sploosh", "Splesh", 5, 5, 5, 5};
Mon mon2 = {"George", 0,5, 5, 5, "The tickler mon", "Spirit", "Humor", "While slow, they get stronger the more damage they have done. To stun their prey they will tickle...that's it", "Tickle", "Clang", "Deciever deciever I shall cut thy pants with a cleaver", "", 5, 5, 5, 5};
Mon mon3 = {"Flatline", 0,5, 5, 5, "The two dimensional mon", "Spirit", "Humor", "Ever wonder who is at fault, it is this mon's fault, they are reprehensible", "Blame", "Throw", "Slide", "Slash", 5, 5, 5, 5};
Mon mon4 = {"Random fae in a bottle", 0,5, 5, 5, "The name stealer mon", "Fae", "Spirit", "Dave. There are many daves in the world, it is the fault of this mon, with a nasty habit of stealing and replacing names of people they meet they have many names but everyone they meet only has one, Dave.", "Davifiy", "Steal", "Float", "Screech", 5, 5, 5, 5};
Mon mon5 = {"Mr President", 0, 5,5, 5, "The presidential mon", "Political", "Spirit", "Anybody who has been within the white house would know it is unnaturally cold, the reason for that is this mon always watching over his successors and making sure the ones he doesnt like dont get re-elected", "Mine", "Moon", "Men", "man", 5, 5, 5, 5};
Mon mon6 = {"Chester", 0,5, 5, 5, "The strongest climbing mon", "Climber", "Swole", "The only living mon left, it spends eternity climbing random ledges", "climb", "scuttle", "jump", "hook", 5, 5, 5, 5};
Mon mon7 = {"Togore", 0, 5,5, 5, "The golfer mon", "Golfer", "Stupoid", "Plays golf all day everyday which is stupid, golf is stupid", "hole in one", "birdie", "hole in three", "hole in two", 5, 5, 5, 5};

    
int gameplay(party p){
    bool running = true;
    while (running) {

        cout << "What would you like to do?" << endl;
        cout << "1. Fight Barry" << endl;
        cout << "2. Find a wild mon" << endl;
        cout << "3. Check your mon's stats" << endl;
        cout << "4. Heal your mon" << endl;
        cout << "5. Exit game" << endl;
        string choice;
        cin >> choice;
        if (choice == "1") {
            cout << "You chose to fight Barry!" << endl;
            //battle function here
        } else if (choice == "2") {
            cout << "You chose to find a wild mon!" << endl;
            //random choice between all mons
            int mon_choice = rand() % 7; //randomly chooses between mon0 and mon7
            Mon opponent;
            if (mon_choice == 0) {
                opponent = mon0;
            } else if (mon_choice == 1) {
                opponent = mon1;
            } else if (mon_choice == 2) {
                opponent = mon2;
            } else if (mon_choice == 3) {
                opponent = mon3;
            } else if (mon_choice == 4) {
                opponent = mon4;
            } else if (mon_choice == 5) {
                opponent = mon5;
            } else if (mon_choice == 6) {
                opponent = mon6;
            } else if (mon_choice == 7) {
                opponent = mon7;
            }
            
            p.battle_mon(opponent, p);
        } else if (choice == "3") {
            cout << "You chose to check your mon's stats!" << endl;
            cout << p.mona.name << " the " << p.mona.title << endl;
            cout << "Type: " << p.mona.type << " / " << p.mona.dualType << endl;
            cout << "DEF: " << p.mona.DEF << endl;
            cout << "SPD: " << p.mona.SPD << endl;
            cout << "Agility: " << p.mona.agility << endl;
            cout << "Health: " << p.mona.health << endl;
            cout << "Attacks: " << p.mona.attack1 << ", " << p.mona.attack2 << ", " << p.mona.attack3 << ", " << p.mona.attack4 << endl;
        } else if (choice == "4") {
            cout << "You chose to heal your mon!" << endl;
            //healing function here
        } else if (choice == "5") {
            cout << "Exiting game. Goodbye!" << endl;
            running = false;
        } else {
            cout << "Invalid choice, exiting game." << endl;
            running = false;
        }
    }
}
int main() {
    
    cout << "Welcome to Spirimons!" << endl << "please choose a starter" << endl << endl;

    cout << "1. "; mon1.mondex(); cout << endl;
    cout << "2. "; mon2.mondex(); cout << endl;
    cout << "3. "; mon3.mondex(); cout << endl;
    string monelection;
    cin >> monelection;
    party p;
    if(monelection == "1") {
        p.mona = mon1;
    } else if (monelection == "2") {
        p.mona = mon2;
    } else if (monelection == "3") {
        p.mona = mon3;
    } else {
        cout << "invalid choice, defaulting to Luke" << endl;
        p.mona = mon1;
    }
    cout << "You chose " << p.mona.name << " the " << p.mona.title << "!" << endl;
    cout << "Your rival, Barry has chosen " << mon4.name << " the " << mon4.title << "!" << endl;
    gameplay(p);

    
    

    return 0;
}
    
    
