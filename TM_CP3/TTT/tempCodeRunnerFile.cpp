bool draw = true;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (board[i][j] != "X" && board[i][j] != "O"){
                draw = false;
            }
        }
    }
    if (draw){
        game = false;
        winner = "DRAW";
        return 0;
    }