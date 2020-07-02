#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
typedef long long ll;



int main()
{

    int n, x;
    cin >> n >> x;
    ll ice = x, dist = 0;
    while(n--)
    {
        char ch;
        cin >> ch;
        int d;
        cin >> d;
        if(ch == '+')
        {
        	ice=ice+d;
        }
        else
        {
        	if(ice<d)
        		dist++;
        	else
        		ice-=d;
        }
    }
    cout<<ice<<" "<<dist;
    return 0;
}