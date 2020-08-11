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
const ll N = 200005;

int n,m,ans[N];
bool vis[N];
vector<pii> v[N];

void dfs(int x,int y, int z)
{
	if(vis[x])
		return;

	vis[x]=1;
	if(x==y)
	{

		ans[z]=1;
		return;
	}
	for(int i=0;i<v[x].size();i+=1)
	{
		if(v[x][i].s==z)
			dfs(v[x][i].f,y,z);
	}	
}
int main()
{
	sync;
	cin>>n>>m;
	for(int i=0;i<m;i+=1)
	{
		int x,y,z;
		cin>>x>>y>>z;
		v[x].pb({y,z});
		v[y].pb({x,z});
	}	
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		for(int i=0;i<v[a].size();i+=1)
		{
			dfs(a,b,v[a][i].s);
			mem(vis,0);
		}	
		int cur=0;
		for(int i=0;i<=m;i+=1)
			cur+=ans[i];

		cout<<cur<<endl;
		mem(ans,0);	
	}
	return 0;
}