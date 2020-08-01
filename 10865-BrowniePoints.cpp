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
const ll N = 200005;

int main()
{
    sync;
    ll x[N], y[N], dx, dy;
    int n, n2, i, stan, ollie;
    while(cin >> n, n)
    {
        for(int i = 0; i < n; i += 1)
            cin >> x[i] >> y[i];
        n2 = (n >> 1);
        stan = ollie = 0;
        for(int i=0;i<n;i+=1)
        {
        	dx=x[i]-x[n2];
        	dy=y[i]-y[n2];
        	if(dx==0 || dy==0)
        		continue;
        	if(dx*dy>0)
        		stan++;
        	else
        		ollie++;
        }	
        cout<<stan<< " "<<ollie<<endl;
    }

    return 0;
}