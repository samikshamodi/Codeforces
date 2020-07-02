/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define RFOR(iterator,start,end,decrement) for (int iterator=start;iterator>=end;iterator-=decrement)
#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1000000;

ll a[N], b[N], n, k;
void solve()
{
    ll sum = 0;
    ll last = n - 1;
    ll fri=k-1;

   
    while(fri >= 0 && b[fri] == 1)
    {
        sum += 2 * a[last];
        last--;
        fri--;
    }
    //cout<<sum;

   
    ll first = 0;
    
    FOR(i, 0, fri+1 , 1)
    {
        sum += a[first];
        sum += a[last--];
        first += b[i] - 1;
    }
    cout << sum;
}

bool desc(int i, int j)
{
    return i > j;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        cin >> n >> k;

        FOR(i, 0, n, 1)
        {
            ll temp;
            cin >> temp;
            a[i] = temp;
        }
        FOR(i, 0, k, 1)
        {
            ll temp;
            cin >> temp;
            b[i] = temp;
        }

        sort(a, a + n);
        sort(b, b + k, desc);

        solve();
        cout << endl;

    }

    return 0;
}