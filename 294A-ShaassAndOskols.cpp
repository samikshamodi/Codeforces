#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
    int n;
    cin >> n;

    int a[n + 1];
    FOR(i, 1, n + 1, 1)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    FOR(i, 1, m+1, 1)
    {
        int x, y;
        cin >> x >> y;
        a[x - 1] += y - 1;
        a[x + 1] += a[x] - y;
        a[x] = 0;
    
    }

    FOR(i, 1, n+1, 1)
    cout << a[i] << endl;




    return 0;
}