/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

ll func(ll n,ll mid)
{
	n=min(n,mid);
	return n*(n+1)/2 + (mid-n)*n;
}
	
int main()
{
    sync;
    ll n,m,k;
    cin>>n>>m>>k;

    ll left=k-1,right=n-k;
    m-=n;	//every hobbit is given 1 pillow, now distributing the rest

    ll l=0,r=m;
    while(l!=r)
    {
    	ll mid=(l+r+1)/2;
    	if(func(left,mid-1)+func(right,mid-1)+mid>m)
    		r=mid-1;
    	else
    		l=mid;

    }
    cout<<l+1;
    

    return 0;
}