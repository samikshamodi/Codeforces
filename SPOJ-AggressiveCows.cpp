/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

bool check(int a[], int n, int c, int d)
{
    int cnt = 1;
    int last = a[0];
    for(int i = 1; i < n; i += 1)
    {
        if(a[i] - last >= d)
        {
            last = a[i];
            cnt++;
        }
        if(cnt == c)
            return true;
    }

    return false;


}

void solve()
{
    int n, c;
    cin >> n >> c;
    int a[n];
    for(int i=0;i<n;i+=1)
    	cin>>a[i];
    sort(a, a + n);
    int low = 0, high = a[n - 1] - a[0], ans = -1, mid;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(check(a, n, c, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    cout << ans;
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