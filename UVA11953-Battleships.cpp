/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int vis[100][101];
char a[100][100];
int n;

void dfs(int i, int j)
{
	if(i<0||j<0 || i==n ||j==n)
		return;
	if(a[i][j]=='.' ||vis[i][j])
		return;
	vis[i][j]=1;
	dfs(i-1,j);
	dfs(i+1,j);
	dfs(i,j-1);
	dfs(i,j+1);

}

int main()
{
	int t;
	cin>>t;
	FOR(tt,0,t,1)
	{
		memset(vis,0,sizeof vis);
		int ans=0;
		
		cin>>n;

		FOR(i,0,n,1)
		FOR(j,0,n,1)
		cin>>a[i][j];

		FOR(i,0,n,1)
		{
			FOR(j,0,n,1)
			{
				if(!vis[i][j] && a[i][j]=='x')
				{
					ans++;
					dfs(i,j);
				}
			}
		}

		cout<<"Case "<<tt+1<<": "<<ans<<endl;


	}

	return 0;
}