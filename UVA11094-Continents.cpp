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

int n, m;
int vis[22][22];
char grid[22][22];
char l;
int cur;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool valid(int x)
{
    return x>=0 && x<n;
}

int fix(int y)
{
    if(y < 0)
        return m - 1;
    if(y >= m)
        return 0;
    return y;
}

void flood(int x, int y)
{
    vis[x][y] = 1;
    cur++;
    for(int i = 0; i < 4; i += 1)
    {
        int tox = dx[i] + x;
        int toy = fix(dy[i] + y);
        if(valid(tox) && !vis[tox][toy] && grid[tox][toy] == l)
            flood(tox, toy);

    }
}
int solve()
{
    mem(vis, 0);
    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1)
            cin >> grid[i][j];

    int x, y;
    cin >> x >> y;
    l = grid[x][y];
    flood(x, y);

    int res = 0;

    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1)
            if(!vis[i][j] && grid[i][j] == l)
            {
                cur = 0;
                flood(i, j);
                res = max(res, cur);
            }
    return res;
}


int main()
{
    sync;
    while(cin >> n >> m)
    {
        cout << solve() << endl;
    }




    return 0;
}