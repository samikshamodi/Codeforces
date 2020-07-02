/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define RFOR(iterator,start,end,decrement) for (int iterator=start;iterator>=end;iterator-=decrement)
#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int main()
{
    unordered_map<char, int> m;
    m['I'] = 20;
    m['C'] = 6;
    m['O'] = 8;
    m['T'] = 4;
    m['D'] = 12;

    ll n, sum = 0;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        sum += m[s[0]];
    }
    cout<<sum;

    return 0;
}