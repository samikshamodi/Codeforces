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

set<int> z;
bool check(int c1, int d1)
{
    for(int i = c1; i <= d1; i += 1)
        if(z.count(i))
            return true;

    return false;

}

int main()
{
    sync;
    int p, q, l, r;
    cin >> p >> q >> l >> r;

    int c[q], d[q];
    for(int i = 0; i < p; i += 1)
    {
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j += 1)
            z.insert(j);
    }

    for(int i = 0; i < q; i += 1)
    {
        cin >> c[i] >> d[i];
    }

    int ans = 0;
    for(int time = l; time <= r; time++)
    {
        for(int i = 0; i < q; i += 1)
        {
            int c1 = c[i] + time;
            int d1 = d[i] + time;


            if(check(c1, d1))
            {
               // cout << c1 << " " << d1 << endl;
                ans++;
                break;
            }
        }
    }


    cout << ans;

    return 0;
}