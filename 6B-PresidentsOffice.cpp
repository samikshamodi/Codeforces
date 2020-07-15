/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define mp make_pair

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int n, m;
char c, a[105][105];
vector<pair<int, int>>pres;
set<char> st;

void check(int x, int y)
{
    if(a[x + 1][y] != c && a[x + 1][y] != '.' && x+1<n)
        st.insert(a[x + 1][y]);

    if(a[x - 1][y] != c && a[x - 1][y] != '.' && x-1>=0)
        st.insert(a[x - 1][y]);

    if(a[x][y-1] != c && a[x][y-1] != '.' && y-1>=0)
        st.insert(a[x][y-1]);

    if(a[x][y+1] != c && a[x][y+1] != '.' && y+1<m)
        st.insert(a[x][y+1]);

}

int main()
{
    sync;
    cin >> n >> m >> c;
    st.insert(c);	//inserting president colour already. so last mein output size-1;
    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1)
        {
            cin >> a[i][j];
            if(a[i][j] == c)
                pres.pb(mp(i, j));
        }

    /* out2d(a,n,m);
     for(auto i:pres)
     	cout<<i.first<<" "<<i.second;*/

    for(auto i : pres)
        check(i.first, i.second);

    cout<<st.size()-1;

    return 0;
}