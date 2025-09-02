// TM Tic Tac Toe Project

#include <iostream>
#include <limits>
using namespace std;

string board[3][3] = {{"1","2","3"},
                        {"4","5","6"},
                        {"7","8","9"}};



int display_board(){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout << "|" << board[i][j];
        }
        cout << "|" << endl << "-------" << endl;
    }
    return 0;
}

int player_turn(){
    cout << "Please choose a number 1-9: ";
    string choice;
    cin >> choice;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(board[i][j] == choice){
                board[i][j] = "X";
            }
        }
    }
    display_board();
    return 0;
}

int comp_turn(){
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand() % 11;
    cout << my_num << endl;
    return 0;
}
int main(){
    comp_turn();
    
}