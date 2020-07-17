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

int main()
{
    sync;
    int n, f;
    cin >> n >> f;
    int k[n], l[n];
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i += 1)
    {
        cin >> k[i] >> l[i];
        v.push_back(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
    }

    sort(v.rbegin(), v.rend());
    //for(auto i:v)
    //	cout<<i.f<<" "<<i.s<<endl;
    ll ans = 0;
    for(int i = 0; i < f; i += 1)
    {
        int pos = v[i].s;
        ans += min(2 * k[pos], l[pos]);
    }

    for(int i = f; i < n; i += 1)
    {
        int pos = v[i].s;
        ans += min(k[pos], l[pos]);

    }
    cout << ans;


    return 0;
}