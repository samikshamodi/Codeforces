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

    int x[n], h[n];
    for(int i = 0; i < n; i += 1)
        cin >> x[i] >> h[i];

    if(n <= 2)
    {
        cout << n;
        return 0;
    }

    int ans = 2;
    for(int i = 1; i < n - 1; i += 1)
    {
        //tree can fall to left
        //cood of previous tree + height of current tree
        //should be less than cood of curr tree
        if(x[i - 1] + h[i] < x[i])
            ans++;
        
        //tree can fall to right
        //cood of current tree _ height of current tree 
        //should be less than cood of next tree
        else if(h[i] + x[i] < x[i + 1])
        {
            ans++;
            x[i]+=h[i];
        }
    }
    cout<<ans;


    return 0;
}