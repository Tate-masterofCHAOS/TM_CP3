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
            return "♟"
        elif self.color == "Black":
            return "♙"
        
        #function to check where it can move
    def canMoveTo(self, newPosition):
        #check if the move is valid for a pawn
        if self.color == "White":
            #white pawns move up the board
            if newPosition[1] > self.position[1] and newPosition[0] == self.position[0]:
                return True
        elif self.color == "Black":
            #black pawns move down the board
            if newPosition[1] < self.position[1] and newPosition[0] == self.position[0]:
                return True
        return False
        
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
        
    def canMoveTo(self, newPosition):
        #check if the move is valid for a knight
        col_diff = abs(ord(newPosition[0]) - ord(self.position[0]))
        row_diff = abs(int(newPosition[1]) - int(self.position[1]))
        if (col_diff == 2 and row_diff == 1) or (col_diff == 1 and row_diff == 2):
            return True
        return False
        
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
        
    def canMoveTo(self, newPosition):
        #check if the move is valid for a bishop
        col_diff = abs(ord(newPosition[0]) - ord(self.position[0]))
        row_diff = abs(int(newPosition[1]) - int(self.position[1]))
        if col_diff == row_diff:
            return True
        return False
        
class Rook(ChessPiece):
    color: str
    position: str
    def __init__(self, color, position):
        super().__init__(color, position)


    def getSymbol(self):
        if self.color == "White":
            return "♜"
        elif self.color == "Black":
            return "♖"
        
    def canMoveTo(self, newPosition):
        #check if the move is valid for a rook
        if newPosition[0] == self.position[0] or newPosition[1] == self.position[1]:
            return True
        return False
        
class Queen(ChessPiece):
    color: str
    position: str
    def __init__(self, color, position):
        super().__init__(color, position)


    def getSymbol(self):
        if self.color == "White":
            return "♛"
        elif self.color == "Black":
            return "♕"
        
    def canMoveTo(self, newPosition):
        #check if the move is valid for a queen
        col_diff = abs(ord(newPosition[0]) - ord(self.position[0]))
        row_diff = abs(int(newPosition[1]) - int(self.position[1]))
        if newPosition[0] == self.position[0] or newPosition[1] == self.position[1] or col_diff == row_diff:
            return True
        return False
        
class King(ChessPiece):
    color: str
    position: str
    def __init__(self, color, position):
        super().__init__(color, position)


    def getSymbol(self):
        if self.color == "White":
            return "♚"
        elif self.color == "Black":
            return "♔"
        
    def canMoveTo(self, newPosition):
        #check if the move is valid for a king
        col_diff = abs(ord(newPosition[0]) - ord(self.position[0]))
        row_diff = abs(int(newPosition[1]) - int(self.position[1]))
        if col_diff <= 1 and row_diff <= 1:
            return True
        return False

class ChessGame():
    def movePiece(self, piece: ChessPiece, newPosition: str) -> bool:
        if piece.canMoveTo(newPosition):
            piece.position = newPosition
            return True
        return False
    
    def removePiece(self, piece: ChessPiece):
        piece.position = "offboard"

    def getpiecesleft(self, pieces: list[ChessPiece]) -> list[ChessPiece]:
        return [piece for piece in pieces if piece.position != "offboard"]
    
    def getpiecesat(self, pieces: list[ChessPiece], position: str) -> list[ChessPiece]:
        return [piece for piece in pieces if piece.position == position]
    

