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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.first == b.first)
        return a.second < b.second;

    else
        return a.first < b.first;

}

void check(int px, int py, string s)
{
    int x = 0, y = 0;
    for(int i = 0; i < s.length(); i += 1)
    {
        if(s[i] == 'U')
        {
            if(py > 0 && y + 1 <= py)
                y++;
        }
        else if(s[i] == 'D'){
        	if(py < 0 && y - 1 >= py)
            y--;
        }
        else if (s[i] == 'R'){
        	if(px > 0 && x + 1 <= px)
            x++;
        }
        else if (s[i] == 'L'){
        	if(px < 0 && x - 1 >= px)
            x--;
        }
    }

    if(x == px && y == py)
    {
        cout << "YES" << endl;
        return ;
    }
    cout << "NO" << endl;

}


void solve()
{
    int px, py;
    cin >> px >> py;

    string s;
    cin >> s;
    check(px, py, s);
}

int main()
{
    sync;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}