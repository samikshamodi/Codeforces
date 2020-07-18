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
    int x, y, z;
    int a, b, c;
    cin >> x >> y >> z;


    if(y == z && y >= x)	//then c is greater than both
    {
        c = y;
        a = x;
        b = 1;
    }

    if(max(a, b) == x && max(a, c) == y && max(b, c) == z)
    {
        cout << "YES\n" << a << " " << b << " " << c;
        return;
    }

    if(x == y && x >= z) //then a is the greatest
    {
        a = x;
        b = 1;
        c = z;
    }

    if(max(a, b) == x && max(a, c) == y && max(b, c) == z)
    {
        cout << "YES\n" << a << " " << b << " " << c;
        return;
    }

    if(x == z && x >= y)	//then b is the greatest
    {
        b = x;
        a = 1;
        c = y;
    }

    if(max(a, b) == x && max(a, c) == y && max(b, c) == z)
    {
        cout << "YES\n" << a << " " << b << " " << c;
        return;
    }


    cout << "NO";


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