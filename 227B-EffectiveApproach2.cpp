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
    int n;
    cin >> n;
    int x;
    unordered_map<int, int> map;

    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        map[x] = i;
    }

    ll petya = 0, vasya = 0;


    int m;
    cin >> m;
    for(int i = 0; i < m; i += 1)
    {
        cin>>x;
        vasya += map[x] ;
        petya += n - map[x]+1;
    }
    cout << vasya << " " << petya;

    return 0;
}