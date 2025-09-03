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
    cout << "Please choose a number 1-9: ";    string choice;
    cin >> choice;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(board[i][j] == choice){
                board[i][j] = "X";
            }
        }
    }
    return 0;
}

int comp_turn(){
    cout << endl << endl << endl << endl;
    int seconds = time(nullptr);
    srand(seconds);
    bool picked = false;
    while (!picked) {
        int my_num = rand() % 9 + 1; // 1-9
        string comp_choice = to_string(my_num);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == comp_choice) {
                    board[i][j] = "O";
                    picked = true;
                    break;
                }
            }
            if (picked) break;
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
            display_board();
            return 0;
        }
    }
    //check columns
    for (int i=0;i<3;i++){
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            game = false;
            winner = board[0][i];
            display_board();
            return 0;
        }
    }
    //check diagonals1
    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0])){
        game = false;
        winner = board[1][1];
        display_board();
        return 0;
    }
    // Simple draw check (only if no winner)
    bool draw = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == to_string(i * 3 + j + 1)) {
                draw = false;
                break;
            }
        }
        if (!draw) break;
    }
    if (draw) {
        game = false;
        winner = "NO ONE, IT'S A DRAW";
    }
    display_board();
    return 0;
}

int main(){
    display_board();
    while (game == true){
        player_turn();
        game_check();
        comp_turn();
        game_check();
        if (game == false){
            break;
        }
    }
    cout << endl << "WINNER IS " << winner;
    
}