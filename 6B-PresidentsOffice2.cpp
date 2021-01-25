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

int n, m;
char c;
char a[101][101];
set<char> s;
vector<pii>v;

void check(int x,int y)
{
	
  if(x-1>=0 && a[x-1][y]!='.')
		s.insert(a[x-1][y]);

	if(x+1<n && a[x+1][y]!='.')
		s.insert(a[x+1][y]);

	if(y-1>=0 && a[x][y-1]!='.')
		s.insert(a[x][y-1]);

	if(y+1<m && a[x][y+1]!='.')
		s.insert(a[x][y+1]);
}

int main()
{
    sync;

    cin >> n >> m >> c;



    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1)
        {
            cin >> a[i][j];
            if(a[i][j] == c)
                v.pb(mp(i, j));
        }

       for(auto i:v)
       {
       	check(i.first,i.second);
       }

       

       if(s.count(c)==1)
       	cout<<s.size()-1;
       else
       	cout<<s.size();

    return 0;
}