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
    int n, m;
    cin >> n >> m;
    int f[n + 1][n + 1];
    mem(f, 0);

    for(int i = 0; i < m; i += 1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        f[a][b] = c;
    }

    for(int i = 1; i <= n; i += 1)
        for(int j = 1; j <= n; j += 1)
            for(int k = 1; k <= n; k += 1)
            {
                if(f[i][j] > 0 && f[j][k] > 0)
                {
                    int temp = min(f[i][j], f[j][k]);
                    f[i][j] -= temp;
                    f[j][k] -= temp;
                    f[i][k] += temp;
                }
            }

    //removing from one's own
    for(int i = 1; i <= n; i += 1)
        for(int j = 1; j <= n; j += 1)
        {
            int temp = min(f[i][j], f[j][i]);
            f[i][j] -= temp;
            f[j][i] -= temp;
        }

    ll ans = 0;
    for(int i = 1; i <= n; i += 1)
        for(int j = 1; j <= n; j += 1)
        {
            if(f[i][j] > 0)
                ans += f[i][j];
        }
    cout << ans;

    return 0;
}