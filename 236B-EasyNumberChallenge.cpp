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

const ll MOD = 1073741824;
const ll INF = 1e18;
const ll N = 1e6 + 7;
int d[1000010];
int main()
{
    sync;
    int a, b, c;

    cin >> a >> b >> c;
    int t = a * b * c;

    long long res = 0;
    for(int i = 1; i <= t; i += 1)
        for(int j = 1; j * i <= t; j += 1)
            d[i * j]++;

    for(int i = 1; i <= a; i += 1)
        for(int j = 1; j <= b; j += 1)
            for(int k = 1; k <= c; k++)
                res += d[i * j * k];

    cout << res;

    return 0;
}