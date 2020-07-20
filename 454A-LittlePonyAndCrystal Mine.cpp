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
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<"";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int main()
{
    sync;
    char a[105][105];
    int n;
    cin >> n;
    mem(a, '*');

    int k = n / 2;
    for(int i = 0; i <= n / 2; i += 1)
    {

        for(int j = k, it = 0; it < (2 * i + 1); j += 1, it++)
        {
            //cout << i << " " << j << " " << k << endl;
            a[i][j] = 'D';
        }
        k--;
    }
    //out2d(a, n, n);

    k = 1;
    int cnt = 2 * (n / 2) + 1;

    for(int i = n / 2 + 1; i < n; i += 1)
    {
        cnt -= 2;
        for(int j = k, it = 0; it < cnt; j += 1, it++)
        {
            a[i][j] = 'D';
        }
        k++;
    }
    out2d(a, n, n);


    return 0;
}