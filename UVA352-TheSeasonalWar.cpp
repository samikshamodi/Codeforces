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

int picture[26][26];
string temp[26];
bool visited[26][26];

int n;
int dr[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};

void visit(int i,int j)
{
	visited[i][j]=true;

	FOR(k,0,8,1)
	{
		if(i+dr[k]>=0 && i+dr[k]<n && j+dc[k]>=0 && j+dc[k]<n)
		{
			int ti=i+dr[k];
			int tj=j+dc[k];
			if(!visited[ti][tj] && picture[ti][tj])
			{
				visit(ti,tj);
			}
		}
	}
}

int main()
{
    
    FOR(i, 0, 26, 1)
    temp[i].clear();
    int c=0;
    while(cin >> n)
    {
        FOR(i, 0, n, 1)
        {
            cin >> temp[i];
        }

        FOR(i, 0, n, 1)
        {
            FOR(j, 0, n, 1)
            {
                picture[i][j] = temp[i][j] - '0';
                visited[i][j] = false;
            }
        }

        int connected=0;
        FOR(i,0,n,1)
        {
        	FOR(j,0,n,1)
        	{
        		if(!visited[i][j] && picture[i][j]==1)
        		{
        			connected++;
        			visit(i,j);
        		}
        	}
        }

        cout<<"Image number "<<++c<<" contains "<<connected<<" war eagles."<<endl;





    }

    return 0;
}