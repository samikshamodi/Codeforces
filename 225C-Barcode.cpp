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
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int cb[1111], cw[1111], cntw[1111], cntb[1111], dp[1111][2];

    string a[10005];
    //black and white in each coloum
    for(int i = 0; i < n; i += 1)
        cin >> a[i];

    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1)
        {
            if(a[i][j] == '#')
                cb[j] ++;
            else
                cw[j] ++;
        }



    mem(dp, 63);
    dp[0][0] = dp[0][1] = 0;


    for(int i = 0; i < m; i += 1)
    {
        cntb[i + 1] = cntb[i] + cb[i];
        cntw[i + 1] = cntw[i] + cw[i];
    }

    for(int i = 0; i < m; i += 1)
    {
        for(int j = x; j <= y; j += 1)
        {
            int k = i + j;
            if(k > m)
                break;
            dp[k][0] = min(dp[k][0], dp[i][1] + cntb[k] - cntb[i]);
            dp[k][1] = min(dp[k][1], dp[i][0] + cntw[k] - cntw[i]);
        }
    }
    cout << min(dp[m][0], dp[m][1]);
    //out2d(dp, 11, 2)



    return 0;
}