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


int n, m, a, b;
bool visited[N];
vector<vector<int>> adj;
vector<int>result;

void topologicalsort(int s)
{
	visited[s]=true;
	FOR(i,0,(int)adj[s].size(),1)
	{
		int child=adj[s][i];
		if(!visited[child])
			topologicalsort(child);
	}
	result.pb(s);
}

int main()
{
    while(cin >> n >> m)
    {
        if(n + m == 0)
            break;

        adj.clear();
        adj.resize(n);
        result.clear();
        memset(visited, false, sizeof(visited));
        FOR(i, 0, m, 1)
        {
            cin >> a >> b;
            a--;
            b--;
            adj[a].pb(b);
        }

        
        FOR(i, 0, n, 1)
        {
            if(!visited[i])
                topologicalsort(i);
        }

        RFOR(i,result.size()-1,0,1)
        cout<<result[i]+1<<" ";

        cout<<endl;

    }

    return 0;
}