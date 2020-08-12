/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

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

ll ans = 1;
int cn;
bool vis[55];
vector<int> v[55];

void dfs (int x)
{
	if (vis[x])
		return;

	vis[x] = 1;
	cn++;
	if (cn > 1)
		ans *= 2;
	for (auto u : v[x])
		dfs(u);

}
int main()
{
	sync;
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i += 1)
	{
		int x, y;
		x--,
		y--;
		cin >> x >> y;
		v[x].pb(y);
		v[y].pb(x);
	}

	for (int i = 0; i < n; i += 1) {
		if (!vis[i])
		{
			cn = 0;
			dfs(i);
		}
	}
	cout << ans;

	return 0;
}