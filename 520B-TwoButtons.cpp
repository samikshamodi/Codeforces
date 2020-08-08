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
const ll N = 3e5 + 7;

int vis[N] = {}, dis[N] = {};

int main()
{
    sync;
    int n, m;
    cin >> n >> m;

    if(n > m)
    {
        cout << n - m;
        return 0;
    }

    queue<int>q;
    q.push(n);
    dis[n] = 0;
    vis[n] = 1;
    while(q.size() > 0)
    {
        int u = q.front();
        q.pop();

        if(u < 1 || u > 3e4)
            continue;

        if(u == m)
            break;

        if(vis[u * 2] == 0)
        {
            q.push(u * 2);
            vis[u * 2] = 1;
            dis[u * 2] = dis[u] + 1;
        }
        if(vis[u - 1] == 0)
        {
            q.push(u - 1);
            vis[u - 1];
            dis[u - 1] = dis[u] + 1;
        }
    }
    cout << dis[m];
    return 0;
}