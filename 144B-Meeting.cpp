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

int a[1003][3];
int n;
int ans = 0;

double dist(int x, int y, int a, int b)
{
    return sqrt(pow(double(x - a), 2) + pow(double(y - b), 2));
}

bool check(int x, int y)
{
    for(int i = 0; i < n; i += 1)
    {
       // cout<<dist(a[i][0], a[i][1], x, y)<<" "<<a[i][2]<<" "<<x<<" "<<y<<endl;
        if(dist(a[i][0], a[i][1], x, y) <= a[i][2])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    sync;
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    cin >> n;
    for(int i = 0; i < n; i += 1)
        cin >> a[i][0] >> a[i][1] >> a[i][2];


    if(xa > xb)
        swap(xa, xb);
    for(int i = xa; i <= xb; i += 1)
    {
        //cout << i << " " << ya << endl;
        //cout << i << " " << yb << endl;
        if(check(i, ya))
            ans++;
        if(check(i, yb))
            ans++;
    }


    if(ya > yb)
        swap(ya, yb);
    for(int i = ya + 1; i < yb; i += 1)
    {
        //cout << xa << " " << i << endl;
        //cout << xb << " " << i << endl;
        if(check(xa, i))
            ans++;
        if(check(xb, i))
            ans++;
    }
    cout << ans;

    return 0;
}