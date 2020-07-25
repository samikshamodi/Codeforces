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
    int p1 = INT_MIN, r1 = INT_MIN, p2 = INT_MAX;

    int n;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i += 1)
    {
        cin >> x[i];
        r1 = max(r1, x[i]);
    }

    int m;
    cin >> m;
    int y[m];
    for(int i = 0; i < m; i += 1)
    {
        cin >> y[i];
        p1 = max(p1, y[i]);
    }

    int k;
    cin >> k;
    int z[k];
    for(int i = 0; i < k; i += 1)
    {
        cin >> z[i];
        p2 = min(p2, z[i]);
    }

    int a, b;
    cin >> a >> b;

//cout<<r1<<" "<<p1<< " "<<p2; 

    double ans;
    ans=r1*sqrt(double(b*p1)/double((a*p2)+(b*p1)));
    cout<<fixed<<setprecision(12)<<ans;



    return 0;
}