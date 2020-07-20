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
    int t, c, s, e;
    //thickness of each book, thickness of each cover, starting vol, ending vol
    cin >> t >> c >> s >> e;
    int tot = t + 2 * c;
    if(s == e)
    {
        cout << t;
        return 0;
    }
    if(s < e) //goes up
    {
        int nob = e - s - 1;
        cout << nob *tot + 2 * c;;
        return 0;
    }

    if(s > e) //goes down
    {
        int nob = s - e - 1;
        cout << nob *tot + 2 * c + 2 * t;
        return 0;
    }

    return 0;
}