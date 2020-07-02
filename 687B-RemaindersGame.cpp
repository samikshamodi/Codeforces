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

ll gcd(ll a,ll b){if(a==0)return b;return gcd(b%a,a);}
ll lcm(ll a, ll b){	return a*b/gcd(a,b);}

int main()
{
    sync;
    ll n,k,x,cur=1;
    cin>>n>>k;
    while(n--)
    {
    	cin>>x;
    	cout<<"lcm("<<cur<<","<<x<<")="<<lcm(cur,x)<<"\t\t";
    	cur=gcd(k,lcm(cur,x));
    	cout<<cur<<endl;
    }
    cur==k?cout<<"Yes":cout<<"No";

    return 0;
}