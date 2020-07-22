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

int luckcnt(int x)
{
	int cnt=0;
	while(x)
	{
		if(x%10==4 ||x%10 ==7)
			cnt++;
		x/=10;
	}
	return cnt;
}
	
int main()
{
    sync;
    int n,k;
    cin>>n>>k;
    int ans=0;
    while(n--)
    {
    	int x;
    	cin>>x;
    	if(luckcnt(x)<=k)
    		ans++;

    }
    cout<<ans;
    

    return 0;
}