/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

void Print_Board(vector<int> board, int n)
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
    cout << endl;
}

bool is_Safe(vector<int> board)
{
    //position of the last placed queen
    int row = board.size() - 1;

    for(int i = 0; i < row; i += 1)
    {
        //if last placed queen is same as any previously places queens
        if(board[row] == board[i])
            return false;

        //if last placed present in diagonal of any previously placed queen
        if(abs(board[row] - board[i]) == abs(row - i))
            return false;
    }
    return true;
}

void N_Queen(vector<int> board, int n)
{
    if(board.size() == n)
    {
        Print_Board(board, n);
        exit(0);	//for 1 solution use this
        //return;	//for all solutions use this
    }

    for(int col = 0; col < n; col++)
    {

        board.push_back(col);
        if(is_Safe(board))
            N_Queen(board, n);

        board.pop_back();

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

    vector<int> board;
    N_Queen(board, n);

    return 0;
}