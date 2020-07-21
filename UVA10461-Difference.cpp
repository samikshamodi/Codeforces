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
const ll N = 505;

bool g[N][N], gb[N][N], mk1[N], mk2[N];
int v[N];

void dfs1(int u, int n)
{
    mk1[u] = 1;
    for(int i = 1; i <= n; i += 1)
        if(!mk1[i] && g[u][i])
            dfs1(i, n);
}

void dfs2(int u, int n)
{
    mk1[u] = 1;
    for(int i = 1; i <= n; i += 1)
        if(!mk2[i] && gb[u][i])
            dfs2(i, n);
}

int main()
{
    sync;
    int n, e;
    int t = 1;
    while(1)
    {
        mem(g, 0);
        mem(gb, 0);
        cin >> n >> e;
        if(n + e == 0)
            break;

        for(int i = 1; i <= n; i += 1)
            cin >> v[i];

        for(int i = 0; i < e; i += 1)
        {
            int a, b;
            cin >> a >> b;
            g[a][b] = 1;
            gb[b][a] = 1;
        }
        int q;
        cin >> q;

        cout << "Case #" << t << ":\n";

        for(int i = 0; i < q; i += 1)
        {
            int a;
            cin >> a;
            mem(mk1, 0);
            mem(mk2, 0);
            dfs1(a, n);
            dfs2(a, n);
            int cnt = 0;
            for(int j = 1; j <= n; j += 1)
            {
                if(!mk1[j] && !mk2[j])
                    cnt += v[j];
            }
            cout << cnt << endl;
        }

        cout << endl;
        t++;

    }

    return 0;
}