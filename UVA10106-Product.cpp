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

    string x, y;

    while(cin >> x)
    {
        cin >> y;
        int res[501];
        memset(res, 0, sizeof(res));

        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());

        FOR(i, 0, x.length(), 1
)        {
            FOR(j, 0, y.length(), 1)
            {
                res[i + j] += (x[i] - '0') * (y[j] - '0');
            }
        }
      //  out1d(res, 5);

        FOR(i, 0, 501, 1)
        {

            res[i + 1] += res[i] / 10;
            res[i] %= 10;
        }


        int i = 500;
        while(i > 0 && res[i] == 0)
            i--;
        for(; i >= 0; i--)
            cout << res[i];
        cout << endl;
    }






    return 0;
}