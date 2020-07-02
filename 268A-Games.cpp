#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
    int n;
    cin >> n;

    int home[n];
    int guest[n];
    FOR(i, 0, n, 1)
    {
        cin >> home[i];
        cin >> guest[i];
    }
    int cnt = 0;
    FOR(i, 0, n, 1)
    {
        int host = home[i];
        FOR(j, 0, n, 1)
        {
            if(i == j)	//same team
                continue;

            if(host == guest[j])
                cnt++;
        }
    }
    cout << cnt;


    return 0;
}