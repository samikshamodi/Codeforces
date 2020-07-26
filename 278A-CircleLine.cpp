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
    int n;
    cin >> n;
    int d[n];

    for(int i = 0; i < n; i += 1)
    {
        cin >> d[i];
    }

    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if(a > b)
        swap(a, b);

    int l1 = 0;
    int l2 = 0;

    //distance from a to b
    for(int i = a; i < b; i += 1)
        l1 += d[i];

    //distance from b to n, then 0 to a
    for(int i = b; i < n; i += 1)
        l2 += d[i];
    for(int i = 0; i < a; i += 1)
        l2 += d[i];

    cout << min(l1, l2);
    return 0;
}