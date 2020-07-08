/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int main()
{
    sync;
    double r[11][4], x, y;
    char ch;
    int n = 0;
    while(cin >> ch && ch != '*')
    {
        cin >> r[n][0] >> r[n][1] >> r[n][2] >> r[n][3];
        n++;
    }
    //out2d(r, n, 4);
    int point = 0;
    int cnt = 0;
    while(cin >> x >> y && x != 9999.9 && y != 9999.9)
    {
        //cout<<x<<" "<<y<<endl;
        point++;
        cnt = 0;
        for(int i = 0; i < n; i += 1)
        {
            //cout<<r[i][0] <<" "<<r[i][2] <<" "<<r[i][1] <<" "<< r[i][3]<<endl;
            if(r[i][0] < x && x < r[i][2] && r[i][3] < y && y < r[i][1])
            {
                cout << "Point " << point << " is contained in figure " << i + 1 << "\n";
                cnt++;
            }
        }
        if(cnt == 0)
            cout << "Point " << point << " is not contained in any figure"<<"\n";


    }
    return 0;
}