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
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    sync;
    int n;
    cin >> n;
    vector<int>a;
    for(int i = 0; i < n; i += 1)
    {
        
        int x;
        cin >> x;
        a.pb(x);
    }

    sort(a.begin(),a.end());

    if(2 * a[0] >= a[n - 1])
    {
        cout << 0;
        return 0;
    }

    int ans =1e8;
    for(int i = 0; i < n; i += 1)
    {
        int val = 2 * a[i] + 1;
        int pos = int (a.end() - lower_bound(a.begin(), a.end(), val));
    	ans=min(ans,pos+i);
    }
    cout<<ans;

    return 0;
}