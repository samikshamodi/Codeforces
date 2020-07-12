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

ll bigmod(ll b, ll p, ll m)
{
    if(p == 0)
        return 1;


    if(p % 2 == 0)
    {
        ll temp = bigmod(b, p / 2, m);
        return (temp*temp)%m;

    }

    else if(p%2==1)
    {
    	ll x,y;
    	x=b%m;
    	y=bigmod(b,p-1,m);
    	return (x*y)%m;
    }

}

int main()
{
    sync;
    ll b, p, m;
    while(cin >> b >> p >> m)
    {
        cout << bigmod(b, p, m);
        cout << "\n";
    }


    return 0;
}