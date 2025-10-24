from classes import *

FILES = "ABCDEFGH"
LIGHT, DARK = "▢", "■"

def create_board():
    # dict "A1".."H8" -> square symbol
    return {f + str(r): (LIGHT if (i + r) % 2 == 0 else DARK)
            for i, f in enumerate(FILES) for r in range(1, 9)}

def set_piece(board, pos, symbol):
    if pos not in board:
        raise ValueError(f"Invalid square: {pos}")
    board[pos] = symbol

def display_board(board):
    for r in range(8, 0, -1):
        print(f"{r} " + " ".join(board[f + str(r)] for f in FILES))
    print("  " + " ".join(FILES))

def main():
    # create pawns quickly
    pawns = [Pawn("White", f + "2") for f in FILES]

    board = create_board()

    # place pawns (assumes Pawn has attribute `position`)
    for p in pawns:
        set_piece(board, p.position, "♙")

    # example: change a square to a knight
    set_piece(board, "B1", "♘")

    display_board(board)