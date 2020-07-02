#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int size = 0, cnt = 0;
    FOR(i, 0, n, 1)
    {
        int x;
        cin >> x;
        if(x > b)
            continue;
        size += x;
        if(size > d)
        {
            size = 0;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}