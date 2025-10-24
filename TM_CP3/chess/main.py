from classes import *

def board(pawnsW, rooksW, knightsW, bishopsW, queenW, kingW):
    Line1 = ["▢","■","▢","■","▢","■","▢","■"]
    line2 = ["▢","■","▢","■","▢","■","▢","■"]
    line3 = ["▢","■","▢","■","▢","■","▢","■"]
    line4 = ["▢","■","▢","■","▢","■","▢","■"]
    line5 = ["▢","■","▢","■","▢","■","▢","■"]
    line6 = ["▢","■","▢","■","▢","■","▢","■"]
    line7 = ["▢","■","▢","■","▢","■","▢","■"]
    line8 = ["▢","■","▢","■","▢","■","▢","■"]

    for pawn in pawnsW:
        if pawn.position == "A2":
            line7[0] = pawn.getSymbol()
        elif pawn.position == "B2":
            line7[1] = pawn.getSymbol()
        elif pawn.position == "C2":
            line7[2] = pawn.getSymbol()
        elif pawn.position == "D2":
            line7[3] = pawn.getSymbol()
        elif pawn.position == "E2":
            line7[4] = pawn.getSymbol()
        elif pawn.position == "F2":
            line7[5] = pawn.getSymbol()
        elif pawn.position == "G2":
            line7[6] = pawn.getSymbol()
        elif pawn.position == "H2":
            line7[7] = pawn.getSymbol()

    for rook in rooksW:
        if rook.position == "A1":
            line8[0] = rook.getSymbol()
        elif rook.position == "H1":
            line8[7] = rook.getSymbol()

    for knight in knightsW:
        if knight.position == "B1":
            line8[1] = knight.getSymbol()
        elif knight.position == "G1":
            line8[6] = knight.getSymbol()
    
    for bishop in bishopsW:
        if bishop.position == "C1":
            line8[2] = bishop.getSymbol()
        elif bishop.position == "F1":
            line8[5] = bishop.getSymbol()
    
    if queenW.position == "D1":
        line8[3] = queenW.getSymbol()
    
    if kingW.position == "E1":
        line8[4] = kingW.getSymbol()

    print(f"{Line1}\n{line2}\n{line3}\n{line4}\n{line5}\n{line6}\n{line7}\n{line8}\n")

  
def main():
    pawn1W = Pawn("White", "A2")
    pawn2W = Pawn("White", "B2")
    pawn3W = Pawn("White", "C2")
    pawn4W = Pawn("White", "D2")
    pawn5W = Pawn("White", "E2")
    pawn6W = Pawn("White", "F2")
    pawn7W = Pawn("White", "G2")
    pawn8W = Pawn("White", "H2")
    pawnsW = [pawn1W, pawn2W, pawn3W, pawn4W, pawn5W, pawn6W, pawn7W, pawn8W]

    rook1W = Rook("White", "A1")
    rook2W = Rook("White", "H1")
    rooksW = [rook1W, rook2W]

    knight1W = Knight("White", "B1")
    knight2W = Knight("White", "G1")
    knightsW = [knight1W, knight2W]

    bishops1W = Bishop("White", "C1")
    bishop2W = Bishop("White", "F1")
    bishopsW = [bishops1W, bishop2W]

    queenW = Queen("White", "D1")

    kingW = King("White", "E1")

    board(pawnsW, rooksW, knightsW, bishopsW, queenW, kingW)

main()