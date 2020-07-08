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

ll cal(ll v,ll k)
{
	int y=0;
	while(v)
	{
		//cout<<v<<"\t"<<y<<"\t"<<v/k<<endl;
		y+=v;
		v/=k;
	}
	return y;
}
	
int main()
{
    sync;
    ll n,k;
    cin>>n>>k;
   	ll l=1,r=1000000000,mid;
   	while(l<r)
   	{
   		mid=(l+r)/2;
   		if(cal(mid,k)>=n)
   			r=mid;
   		else
   			l=mid+1;
   	}
   	cout<<l;
    return 0;
}