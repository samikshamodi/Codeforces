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


ll sum(ll x)
{
    ll s = 0;
    while(x)
    {

        s += x % 10;
        x /= 10;
    }
    return s;
}

int main()
{
    sync;
    string s;
    cin >> s;
    if(s.length() == 1)
    {
        cout << 0;
        return 0;
    }

    ll n=0;
    for(int i=0;i<s.length();i+=1)
    	n+=s[i]-'0';

    int cnt=1;
    while(true)
    {
    	if(n<=9)
    	{
    		cout<<cnt;
    		return 0;
    	}
    	cnt++;
    	n=sum(n);
    }

    return 0;
}