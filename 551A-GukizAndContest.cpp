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
#define out1d(arr,size) {for(int i=1;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;
	
int main()
{
    sync;
    int n;
    cin>>n;
    int ans[n+1];
    vector<pair<int,int>>v;

    for(int i=1;i<=n;i+=1)
    {
    	int x;
    	cin>>x;
    	v.pb(mp(x,i));
    }	
    sort(v.rbegin(),v.rend());
    int pos=1;
   	int prev=v[0].f;
   	int tie=0;
    
    for(int i=0;i<n;i+=1)
    {

    	if(v[i].f!=prev)
    	{
    		pos+=tie;
    		prev=v[i].f;
    		tie=0;
    	}
    	ans[v[i].s]=pos;
    	tie++;
    }	

    out1d(ans,n+1);
    return 0;
}