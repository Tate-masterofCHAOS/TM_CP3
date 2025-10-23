class ChessPiece:
    color: str
    position: str
    def __init__(self,color="", position=""):
        self.color = color
        self.position = position

    def getPosition(self):
        pass

    def move(self):
        pass
    
    def getSymbol(self):
        pass

class Pawn(ChessPiece):
    color: str
    position: str
    def __init__(self, color, position):
        super().__init__(color, position)


    def getSymbol(self):
        if self.color == "White":
            return "♙"
        elif self.color == "Black":
            return "♟"
        
class Knight(ChessPiece):
    color: str
    position: str
    def __init__(self, color, position):
        super().__init__(color, position)


    def getSymbol(self):
        if self.color == "White":
            return "♞"
        elif self.color == "Black":
            return "♘"
        
class Bishop(ChessPiece):
    color: str
    position: str
    def __init__(self, color, position):
        super().__init__(color, position)


    def getSymbol(self):
        if self.color == "White":
            return "♝"
        elif self.color == "Black":
            return "♗"
        

def main():
    pawn = Pawn("Black", "E3")
    print(pawn.getSymbol())
    pawn2 = Pawn("White", "E3")
    print(pawn.getSymbol())
    knight = Knight("Black", "E3")
    print(knight.getSymbol())
    knight2 = Knight("White", "E3")
    print(knight.getSymbol())

main()