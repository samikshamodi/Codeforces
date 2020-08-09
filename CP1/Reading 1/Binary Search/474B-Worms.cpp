/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int n, a[N], m, q, sum[N] = {};

int binarysearch(int l, int r)
{
    if(l <= r)
    {
        int mid = (l + r) / 2;

        if(q > sum[mid - 1] && q <= sum[mid])
            return mid;

        if(q > sum[mid])
            return binarysearch(mid + 1, r);

        return binarysearch(l, mid - 1);
    }
    return -1;
}


int main()
{
    cin >> n;
    for(int i = 0; i < n; i += 1)
    {
        cin >> a[i];
        sum[i] = a[i] + sum[i - 1];
    }

    cin >> m;
    while(m--)
    {
        cin >> q;

        cout << binarysearch(0, n - 1) + 1 << endl;

    }



    return 0;
}