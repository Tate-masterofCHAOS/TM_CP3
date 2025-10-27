from classes import *

def board(pawnsW, rooksW, knightsW, bishopsW, queenW, kingW, pawnsB, rooksB, knightsB, bishopsB, queenB, kingB):
    Line1 = ["■","▢","■","▢","■","▢","■","▢"]
    line2 = ["▢","■","▢","■","▢","■","▢","■"]
    line3 = ["■","▢","■","▢","■","▢","■","▢"]
    line4 = ["▢","■","▢","■","▢","■","▢","■"]
    line5 = ["■","▢","■","▢","■","▢","■","▢"]
    line6 = ["▢","■","▢","■","▢","■","▢","■"]
    line7 = ["■","▢","■","▢","■","▢","■","▢"]
    line8 = ["▢","■","▢","■","▢","■","▢","■"]

    for pawn in pawnsW:
        if pawn.position == "A2":
            line2[0] = pawn.getSymbol()
        elif pawn.position == "B2":
            line2[1] = pawn.getSymbol()
        elif pawn.position == "C2":
            line2[2] = pawn.getSymbol()
        elif pawn.position == "D2":
            line2[3] = pawn.getSymbol()
        elif pawn.position == "E2":
            line2[4] = pawn.getSymbol()
        elif pawn.position == "F2":
            line2[5] = pawn.getSymbol()
        elif pawn.position == "G2":
            line2[6] = pawn.getSymbol()
        elif pawn.position == "H2":
            line2[7] = pawn.getSymbol()

    for rook in rooksW:
        if rook.position == "A1":
            Line1[0] = rook.getSymbol()
        elif rook.position == "H1":
            Line1[7] = rook.getSymbol()

    for knight in knightsW:
        if knight.position == "B1":
            Line1[1] = knight.getSymbol()
        elif knight.position == "G1":
            Line1[6] = knight.getSymbol()
    
    for bishop in bishopsW:
        if bishop.position == "C1":
            Line1[2] = bishop.getSymbol()
        elif bishop.position == "F1":
            Line1[5] = bishop.getSymbol()
    
    if queenW.position == "D1":
        Line1[3] = queenW.getSymbol()
    
    if kingW.position == "E1":
        Line1[4] = kingW.getSymbol()

    for pawn in pawnsB:
        if pawn.position == "A7":
            line7[0] = pawn.getSymbol()
        elif pawn.position == "B7":
            line7[1] = pawn.getSymbol()
        elif pawn.position == "C7":
            line7[2] = pawn.getSymbol()
        elif pawn.position == "D7":
            line7[3] = pawn.getSymbol()
        elif pawn.position == "E7":
            line7[4] = pawn.getSymbol()
        elif pawn.position == "F7":
            line7[5] = pawn.getSymbol()
        elif pawn.position == "G7":
            line7[6] = pawn.getSymbol()
        elif pawn.position == "H7":
            line7[7] = pawn.getSymbol()

    for rook in rooksB:
        if rook.position == "A8":
            line8[0] = rook.getSymbol()
        elif rook.position == "H8":
            line8[7] = rook.getSymbol()

    for knight in knightsB:
        if knight.position == "B8":
            line8[1] = knight.getSymbol()
        elif knight.position == "G8":
            line8[6] = knight.getSymbol()
    
    for bishop in bishopsB:
        if bishop.position == "C8":
            line8[2] = bishop.getSymbol()
        elif bishop.position == "F8":
            line8[5] = bishop.getSymbol()
    
    if queenB.position == "D8":
        line8[3] = queenB.getSymbol()
    
    if kingB.position == "E8":
        line8[4] = kingB.getSymbol()

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

    pawn1B = Pawn("Black", "A7")
    pawn2B = Pawn("Black", "B7")
    pawn3B = Pawn("Black", "C7")
    pawn4B = Pawn("Black", "D7")
    pawn5B = Pawn("Black", "E7")
    pawn6B = Pawn("Black", "F7")
    pawn7B = Pawn("Black", "G7")
    pawn8B = Pawn("Black", "H7")
    pawnsB = [pawn1B, pawn2B, pawn3B, pawn4B, pawn5B, pawn6B, pawn7B, pawn8B]

    rook1B = Rook("Black", "A8")
    rook2B = Rook("Black", "H8")
    rooksB = [rook1B, rook2B]

    knight1B = Knight("Black", "B8")
    knight2B = Knight("Black", "G8")
    knightsB = [knight1B, knight2B]

    bishops1B = Bishop("Black", "C8")
    bishop2B = Bishop("Black", "F8")
    bishopsB = [bishops1B, bishop2B]

    queenB = Queen("Black", "D8")

    kingB = King("Black", "E8")

    board(pawnsW, rooksW, knightsW, bishopsW, queenW, kingW, pawnsB, rooksB, knightsB, bishopsB, queenB, kingB)

main()