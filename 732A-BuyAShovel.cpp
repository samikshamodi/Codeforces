#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
    int n, k;
    cin >> n >> k;

    int i = 1;
    while(true)
    {
        if((n * i) % 10 == 0 || (n * i) % 10 == k)
            break;
        i++;

    }
    cout<<i;


return 0;
}