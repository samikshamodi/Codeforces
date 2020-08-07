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

int main()
{
    sync;
    int n, x0, y0;
    vector<pair<int, int>>v;
    cin >> n >> x0 >> y0;
    for(int i = 0; i < n; i += 1)
    {
        int a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    bool vis[n];
    mem(vis,false);
    int shots=0;
    for(int i = 0; i < n; i += 1)
    {
        if(!vis[i])
        {
            vis[i] = true;
            int x1 = v[i].f;
            int y1 = v[i].s;
            shots++;

            for(int j = 0; j < n; j += 1)
            {
                if(!vis[j])
                {
                    int x2 = v[j].f;
                    int y2 = v[j].s;

                    if((x1-x0)*(y2-y0)==(x2-x0)*(y1-y0))
                    	vis[j]=true;
                }
            }
        }
    }
    cout<<shots;

    return 0;
}