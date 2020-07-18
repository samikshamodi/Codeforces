/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

string g[3];

bool checkrows(char winner)
{
    for(int i = 0; i < 3; i += 1)
        if(g[i][0] == winner && g[i][1] == winner && g[i][2] == winner)
            return true;

    return false;
}

bool checkcols(char winner)
{
    for(int i = 0; i < 3; i += 1)
        if(g[0][i] == winner && g[1][i] == winner && g[2][i] == winner)
            return true;

    return false;
}

bool checkdiagonals(char winner)
{
    if(g[0][0] == winner && g[1][1] == winner && g[2][2] == winner)
        return true;

    if(g[0][2] == winner && g[1][1] == winner && g[2][0] == winner)
        return true;

    return false;
}

int main()
{
    sync;
    int n;
    cin >> n;
    while(n--)
    {
        bool possible = true;
        for(int i = 0; i < 3; i += 1)
            cin >> g[i];

        int xcount = 0, ocount = 0;
        for(int i = 0; i < 3; i += 1)
            for(int j = 0; j < 3; j += 1)
            {
                if(g[i][j] == 'X')
                {
                    xcount++;
                    continue;
                }
                if(g[i][j] == 'O')
                    ocount++;
            }

        if(ocount > xcount)
            possible = false;

        if(xcount - ocount > 1)
            possible = false;

        bool winnerx = (checkrows('X') || checkcols('X') || checkdiagonals('X'));
        if(winnerx)
            if(xcount - ocount != 1)
                possible = false;


        bool winnero = (checkrows('O') || checkcols('O') || checkdiagonals('O'));
        if(winnero)
            if(xcount - ocount != 0)
                possible = false;

        if(winnerx==true && winnero==true)
        	possible=false;

        if(possible)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}

