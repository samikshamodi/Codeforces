/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

bool is_Safe(int board[], int row)
{
    for(int i = 0; i < row; i += 1)
    {
        //if same column as previous queen
        if(board[row] == board[i])
            return false;

        //if present in diagonal as previous queen
        if(abs(board[row] - board[i]) == abs(row - i))
            return false;
    }
    return true;
}

bool N_Queen(int board[], int row, int n)
{
    if(row == n)
        return true;

    bool isAllQueensPlaced = false;

    for(int col = 0; col < n; col++)
    {
        board[row] = col;
        if(is_Safe(board, row))
            isAllQueensPlaced = N_Queen(board, row + 1, n);

        if(isAllQueensPlaced)
            return true;
    }
     return false;
}

void Print_Board(int board[], int n)
{
    for(int i = 0; i < n; i += 1)
    {
        for(int j = 0; j < n; j += 1)
        {
            if(j == board[i])
                cout << "Q ";
            else
                cout << "- ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 20;
    if(n < 4)
    {
        cout << "No solution available.";
        return 0;
    }

    int board[n];
    N_Queen(board, 0, n);
    Print_Board(board, n);

    return 0;
}