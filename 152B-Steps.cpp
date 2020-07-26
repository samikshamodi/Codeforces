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

int n, m, x, y, dx, dy, k;

bool valid(ll i, ll j)
{
    return (i > 0 && i <= n && j > 0 && j <= m);
}

int main()
{
    sync;
    cin >> n >> m;
    cin >> x >> y;
    cin >> k;

    ll ans = 0, steps;
    for(int i = 0; i < k; i += 1)
    {
        steps=0;
        cin >> dx >> dy;
        ll l=0,r=1e9+9,mid;
        while(l<=r)
        {
        	mid=(l+r)/2;
        	if(valid(x+(dx*mid),y+(dy*mid)))
        	{
        		steps=mid;
        		l=mid+1;
        	}
        	else
        		r=mid-1;
        }
        ans+=steps;
        x+=(dx*steps);
        y+=(dy*steps);


    }
    cout << ans;


    return 0;
}