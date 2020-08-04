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
    vector<int>v[N];
    int n;
    set<int>st;
    cin >> n;
    for(int i = 0; i < n; i += 1)
    {
        int x;
        cin >> x;
        v[x].pb(i);
        st.insert(x);
    }

    vector<int>res;

    for(auto i : st)
    {
        if(v[i].size() == 1)
        {
            res.pb(i);
            res.pb(0);
        }
        else
        {
            int d = v[i][1] - v[i][0];
            res.pb(i);
            res.pb(d);

            for(int j = 1; j < v[i].size(); j += 1)
            {
                if(v[i][j] - v[i][j - 1] != d)
                {
                	res.pop_back();
                	res.pop_back();
                	break;
                }
            }

        }

    }
    cout<<res.size()/2<<endl;
    for(int i=0;i<res.size();i+=2)
    {
    	cout<<res[i]<<" "<<res[i+1]<<endl;
    }	


    return 0;
}