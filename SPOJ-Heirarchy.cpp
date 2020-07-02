/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int n, k, w, x;
vector<vector<int>> adj;
bool visited[N] = {};
vector<int>result;
int boss[N];

static void topologicalsort(int s)
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
    cin >> n >> k;
    adj.resize(n);
    FOR(i, 0, k, 1)
    {
        cin >> w;
        while(w--)
        {
            cin >> x;
            x--;
            adj[i].pb(x);
        }
    }

    FOR(i, 0, n, 1)
    {
        if(!visited[i])
        topologicalsort(i);
    }

    int pos=-1;
   	for(int i=n-1;i>=0;i--)
   	{
   		int stu=result[i];
   		boss[stu]=pos;
   		pos=stu;
   	}

   	FOR(i,0,n,1)
   	cout<<boss[i]+1<<endl;

    return 0;
}
