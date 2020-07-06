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
    char a[4][4];
    int cnt = 0;
    for(int i = 0; i < 4; i += 1)
        for(int j = 0; j < 4; j += 1)
            cin >> a[i][j];


    for(int k = 0,i=0; k < 3; k++,i++)
    {
        cnt = 0;
        for(int j = 0; j < 3; j += 1)
        {
            //cout << a[0][j] << a[0][j + 1] << a[1][j] << a[1][j + 1] << endl;
            if(a[i][j] == '#')
                cnt++;
            if(a[i][j + 1] == '#')
                cnt++;
            if(a[i+1][j] == '#')
                cnt++;
            if(a[i+1][j + 1] == '#')
                cnt++;

            if(cnt != 2)
            {
                cout << "YES";
                return 0;
            }
            cnt = 0;
        }


    }


    cout << "NO";
    return 0;
}