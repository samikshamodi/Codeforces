#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
    int n;
    cin >> n;
    int arr[n];
    FOR(i, 0, n, 1)
    {
        cin >> arr[i];
    }

    int turn = 0;
    int l = 0;
    int r = n - 1;
    int s = 0;
    int d = 0;
    while(l <= r)
    {
        if(turn%2 == 0)	//even serja turn
        {
            if(arr[r] > arr[l])
            {
                s += arr[r--];
            }
            else
                s += arr[l++];
        }
        else
        {
            if(arr[r] > arr[l])
            {
                d += arr[r--];
            }
            else
                d += arr[l++];
        }
        // /cout << s << " " << d<<endl;
        turn++;
    }
    cout << s << " " << d;

    return 0;
}