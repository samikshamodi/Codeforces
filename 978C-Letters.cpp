/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

ll n, m, a[1000000], q, sum[1000000] = {};

ll binarysearch(ll l, ll r)
{
    if(l <= r)
    {
        ll mid = (l + r) / 2;

        if(q > sum[mid - 1] && q <= sum[mid])
            return mid;
        
        else if(q > sum[mid])
            return binarysearch(mid + 1, r);
        
        return binarysearch(l, mid - 1);
    }
    return -1;
}


int main()
{
    cin >> n >> m;
    for(ll i = 0; i < n; i += 1)
    {
        cin >> a[i];
        sum[i] = a[i] + sum[i - 1];
    }
    while(m--)
    {
        cin >> q;
        ll ans = binarysearch(0, n - 1);
        cout << ans+1<<" "<<q-sum[ans-1]<<endl;
    }

    return 0;
}