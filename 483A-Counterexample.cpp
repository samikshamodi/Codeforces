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
const ll N = 1e5 + 7;

ll gcd(ll a, ll b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ll l, r,first=-1,second=-1,third=-1;
    cin >> l >> r;
    if(r - l + 1 < 3)
        cout << -1;
    else
    {

        for(ll j = l; j <= r - 2; j++)
        {
            for(ll i=j+2;i<=r;i++)
            {
            	if(gcd(j,j+1)==1 && gcd(j+1,i)==1 && gcd(j,i)!=1)
            	{
            		first=j;
            		second=j+1;
            		third=i;
            		break;
            	}
            }
        }
        if(first == -1)
            cout << "-1";
        else
            cout << first << " " << second<< " " << third;
    }
    return 0;
}