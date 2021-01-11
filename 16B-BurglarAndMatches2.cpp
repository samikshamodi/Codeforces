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
	
int main()
{
    sync;
    int n,m;
    cin>>n>>m;

    int mb=0, ma=0;
    vector<pii> v;

    int a,b;
    for(int i=0;i<m;i++)
    {
    	cin>>a>>b;
    	mb+=a;
    	ma+=a*b;
    	v.pb(mp(b,a));
    }

    if(mb<n)
    {
    	cout<<ma;
    	return 0;
    }

    sort(v.rbegin(), v.rend());
     /*for(int i=0;i<m;i++)
     {
     	cout<<v[i].first<<" "<<v[i].second<<endl;
     }*/
    int ans=0,matchbox=0;

    for(int i=0;i<m;i++)
    {
    	while(v[i].second>0)
    	{
    		if(matchbox==n)
    		{
    			cout<<ans;
    			return 0;
    		}

    		ans+=v[i].first;
    		v[i].second--;
    		matchbox++;
    	}
    }

    cout<<ans;



    return 0;
}	