#include <iostream>

using namespace std;

int main()
{
    // Local variables
    int i,j;
    enum square
    {
        Empty,
        Pawn,
        Rook,
        Knight,
        Bishop,
        King,
        Queen
    };
    square chessboard[8][8];

    // Initializing chessboard figures
    for (i=0;i<=7;i++)
    {
        chessboard[1][i] = chessboard[6][i] = Pawn;
    }
    chessboard[0][0] = chessboard[0][7] = Rook;
    chessboard[7][0] = chessboard[7][7] = Rook;
    chessboard[0][1] = chessboard[0][6] = Knight;
    chessboard[7][1] = chessboard[7][6] = Knight;
    chessboard[0][2] = chessboard[0][5] = Bishop;
    chessboard[7][2] = chessboard[7][5] = Bishop;
    chessboard[0][3] = chessboard[7][3] = King;
    chessboard[0][4] = chessboard[7][4] = Queen;

    // Initializing empty chessboard cells
    for (i=2;i<=5;i++)
    {
        for (j=0;j<=7;j++)
        {
            chessboard[i][j] = Empty;
        }
    }

    return 0;
}
