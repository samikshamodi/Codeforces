/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

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
    ll n, k;
    cin >> n >> k;
    n--;
    k--;

    if(n ==0)
    {
        cout << 0;
        return 0;
    }
    if(n>(k*(k+1))/2)
    {
    	cout<<-1;
    	return 0;
    }

    ll l=1,r=k+1;
    while(l+1<r)
    {
    	ll mid=(l+r)/2;

    	if((k+mid)*(k-mid+1)/2>=n)
    		l=mid;
    	else
    		r=mid;
    }

    cout<<k+1-l;
    return 0;
}