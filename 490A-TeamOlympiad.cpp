/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int main()
{
    int n;
    cin >> n;

    int t;
    int a[N];
    int x, y, z;
    int a1[N], b1[N], c1[N];
    int ia1 = 0, ib1 = 0, ic1 = 0;
    FOR(i, 0, n, 1)
    {
        cin >> t;
        a[i] = t;
        if(t == 1)
        {
            x++;
            a1[ia1++]=i+1;

        }
        else if(t == 2)
        {
            y++;
            b1[ib1++]=i+1;
        }
        else
        {
            z++;
            c1[ic1++]=i+1;
        }
    }

    int teams = min(min(x, y), z);
    cout << teams << endl;

    
  	FOR(i,0,teams,1)
  	{
  		cout<<a1[i]<<" "<<b1[i]<<" "<<c1[i]<<endl;
  	}



    return 0;
}