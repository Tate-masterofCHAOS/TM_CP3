// TM Tic Tac Toe Project

#include <iostream>
#include <limits>
using namespace std;

string board[3][3] = {{"1","2","3"},
                        {"4","5","6"},
                        {"7","8","9"}};
bool game = true;
string winner = "";

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
    cout << endl << endl << endl << endl;
    int seconds = time(nullptr);
    srand(seconds);
    int my_num = rand() % 10;
    string comp_choice = "2";
    if(my_num == 0){
        comp_choice = "1";
    }
    else if(my_num == 1){
        comp_choice = "2";
    }
    else if(my_num == 2){
        comp_choice = "3";
    }
    else if(my_num == 3){
        comp_choice = "4";
    }
    else if(my_num == 4){
        comp_choice = "5";
    }
    else if(my_num == 5){
        comp_choice = "6";
    }
    else if(my_num == 6){
        comp_choice = "7";
    }
    else if(my_num == 7){
        comp_choice = "8";
    }
    else if(my_num == 8){
        comp_choice = "9";
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(board[i][j] == comp_choice){
                board[i][j] = "O";
            }
        }
    }
    return 0;
}

int game_check(){
    //check rows
    for (int i=0;i<3;i++){
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            game = false;
            winner = board[i][0];
        }
    }
    //check columns
    for (int i=0;i<3;i++){
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            game = false;
            winner = board[0][i];
        }
    }
    //check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        game = false;
        winner = board[0][0];
    }
    return 0;
}
int main(){
    while (game = true){
        display_board();
        player_turn();
        comp_turn();
        game_check();
        if (game == false){
            break;
        }
    }
    cout << endl << "WINNER IS " << winner;
    
}