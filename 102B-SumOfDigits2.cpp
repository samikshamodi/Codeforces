/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

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

ll calc(ll x)
{
	ll ans=0;
	while(x>0)
	{
		ans+=x%10;
		x/=10;
	}
	return ans;
}
	
int main()
{
    sync;
    string s;
    cin>>s;

     if(s.length() == 1)
    {
        cout << 0;
        return 0;
    }

    ll sum=0;
    for(int i=0;i<s.length();i++)
    	sum+=s[i]-'0';


    int cnt=1;
    while(sum>9)
    {

    	sum=calc(sum);
    	cnt++;
    }

    cout<<cnt;

    return 0;
}