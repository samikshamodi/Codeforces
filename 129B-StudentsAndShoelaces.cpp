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

int main()
{
    sync;
    int n, m;
    cin >> n >> m;
    vector<set<int>>v(n);
    for(int i = 0; i < m; i += 1)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        v[a].insert(b);
        v[b].insert(a);
    }
    /*for(auto i : v)
    {
        for(auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }*/
    int cnt = 0;

    while(1)
    {
        vector<int>t;
        for(int i = 0; i < n; i += 1)
        {
            if(v[i].size() == 1)
                t.pb(i);
        }

        for(int i = 0; i < t.size(); i += 1)
        {
            set<int>:: iterator it = v[t[i]].begin();
            v[t[i]].clear();
            v[*it].erase(t[i]);
        }

        if(t.size())
            cnt++;
        else
            break;
    }


    cout << cnt;

    return 0;
}