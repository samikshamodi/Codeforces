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


ll gcd(ll a,ll b,ll &x,ll &y)
{
	if(b==0)
	{
		x=1;
		y=0;
		return a;
	}
	ll x1,y1;
	ll d=gcd(b,a%b,x1,y1);
	x=y1;
	y=x1-y1*(a/b);
	return d;
}
int main()
{
    sync;
    ll a,b,c,d,x,y;
    cin>>a>>b>>c;
    c=-c;
    ll g=gcd(abs(a),abs(b),x,y);
    if(c%g!=0)
    {
    	cout<<-1;
    	return 0;
    }
    x*=c/g;
    y*=c/g;
    if(a<0) x=-x;
    if(b<0) y=-y;
    cout<<g<<" "<<x<<" "<<y;

    return 0;
}