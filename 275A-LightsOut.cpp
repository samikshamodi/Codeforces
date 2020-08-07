/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

#define endl '\n'
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
int cur[5][5];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

void toggle(int x, int y)
{
    cur[x][y]*=-1;
    for(int i = 0; i < 4; i += 1)
    {
        int xn = x + dx[i];
        int yn = y + dy[i];
        cur[xn][yn] *= -1;
    }
}


int main()
{
    sync;
    for(int i = 0; i < 5; i += 1)
        for(int j = 0; j < 5; j += 1)
            cur[i][j] = 1;

    for(int i = 1; i <= 3; i += 1)
        for(int j = 1; j <= 3; j += 1)
        {
            int x;
            cin >> x;
            if(x % 2 == 1)
                toggle(i, j);
        }

    for(int i = 1; i <= 3; i += 1)
    {
        for(int j = 1; j <= 3; j += 1)
        {
            if(cur[i][j] == -1)
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }
    return 0;
}