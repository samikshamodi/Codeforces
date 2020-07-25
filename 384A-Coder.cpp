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
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<"";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;
int n;
int a[1005][1005] = {};
bool valid(int x, int y)
{

    if(x + 1 >= 0 && x < n && y >= 0 && y < n && a[x + 1][y] == 1)
        return false;

    if(x - 1 >= 0 && x - 1 < n && y >= 0 && y < n && a[x - 1][y] == 1)
        return false;

    if(x >= 0 && x < n && y + 1 >= 0 && y + 1 < n && a[x][y + 1] == 1 )
        return false;

    if(x >= 0 && x < n && y - 1 >= 0 && y - 1 < n && a[x][y - 1] == 1 )
        return false;


    return true;
}

int main()
{
    sync;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i += 1)
    {
        for(int j = 0; j < n; j += 1)
        {
            if(valid(i, j))
            {
                a[i][j] = 1;
                cnt++;
            }

        }
    }
    cout<<cnt<<endl;
    for(int i = 0; i < n; i += 1)
    {
        for(int j = 0; j < n; j += 1)
        {
            if(a[i][j] == 1)
                cout << "C";
            else
                cout << ".";
        }
        cout<<endl;
    }

    return 0;
}