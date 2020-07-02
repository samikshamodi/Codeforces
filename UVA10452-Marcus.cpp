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

int dx[] = {-1, 0, 0};
int dy[] = {0, 1, -1};
string dir[] = {"forth", "right", "left"};
string path = "IEHOVA#";

int n, m;
char a[9][9];

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        cin >> n >> m;
        pair<int, int>st, en;
        FOR(i, 0, n, 1)
        {
            FOR(j, 0, m, 1)
            {
                cin >> a[i][j];
                if(a[i][j] == '@')
                    st = {i, j};
                else if(a[i][j] == '#')
                    en = {i, j};
            }
        }

        
        
        vector<string>res;
        int idx=0;
        while(st!=en)
        {
        	
        	FOR(i,0,3,1)
        	{
        		int toX=st.first+dx[i];
        		int toY=st.second+dy[i];
        		if(valid(toX,toY)==true && a[toX][toY]==path[idx])
        		{
        			st={toX,toY};
        			res.push_back(dir[i]);
        			idx++;
        			break;
        		}
        	}

        }

       cout << res[0];
		for (int i = 1; i < res.size(); i++)
			cout << " " << res[i];
		cout << endl;


    }

    return 0;
}