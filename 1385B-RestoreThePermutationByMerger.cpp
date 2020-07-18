/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

void solve()
{
    set<int> st;
    int n;
    cin >> n;

    for(int i = 0; i < 2 * n; i += 1)
    {
        int x;
        cin >> x;
        if(st.find(x) == st.end())
        {
            st.insert(x);
            cout << x << " ";
        }
    }


}

int main()
{
    sync;

    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << "\n";
    }


    return 0;
}