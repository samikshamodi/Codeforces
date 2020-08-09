/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

void solve()
{
    ll n, temp, total = 0, minrounds = 0, rounds;
    cin >> n;
    for(ll i = 0; i < n; i += 1)
    {
        cin >> temp;
        total += temp;
        if(temp > minrounds)
            minrounds = temp;
    }
    rounds = total / (n - 1);

    //taking ceil
    if(total % (n - 1) > 0)
        rounds++;

    if(rounds < minrounds)
        rounds = minrounds;

    cout << rounds;
}

int main()
{
    sync;
    int testCases = 1;
    //cin >> testCases;
    while (testCases--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}