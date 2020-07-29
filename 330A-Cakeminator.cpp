/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

#define endl '\n'
#define pb push_back
#define mp make_pair
#define f first
#define s second

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
    char a[20][20];
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r; i += 1)
        for(int j = 0; j < c; j += 1)
            cin >> a[i][j];

    vector<int> row;
    vector<int>col;

    for(int i = 0; i < r; i += 1)
    {
        row.pb(i);
        for(int j = 0; j < c; j += 1)
        {
            if(a[i][j] == 'S')
            {
                row.pop_back();
                break;
            }
        }
    }

    for(int i = 0; i < c; i += 1)
    {
        col.pb(i);
        for(int j = 0; j < r; j += 1)
        {
            if(a[j][i] == 'S')
            {
                col.pop_back();
                break;
            }
        }
    }

    bool eaten[r][c];
    mem(eaten, 1);

    for(auto i : row)
        for(int j = 0; j < c; j += 1)
            eaten[i][j] = 0;

    for(auto i : col)
        for(int j = 0; j < r; j += 1)
            eaten[j][i] = 0;

    int cnt = 0;
    for(int i = 0; i < r; i += 1)
        for(int j = 0; j < c; j += 1)
            if(eaten[i][j] == 0)
                cnt++;
    cout << cnt;
    


    return 0;
}