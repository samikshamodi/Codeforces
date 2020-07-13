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

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    //s1 always has longer length
    if(s1.length() < s2.length())
        swap(s1, s2);

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());


    int na = s1.length(), nb = s2.length();
    int a[na], b[nb];
    for(int i = 0; i < s1.length(); i += 1)
        a[i] = int(s1[i]) - 48;
    for(int i = 0; i < s2.length(); i += 1)
        b[i] = int(s2[i]) - 48;

    int sum[na];
    int i = na - 1, j = nb - 1, k = na - 1;
    int carry = 0, s = 0;
    while(j >= 0)
    {
        s = a[i] + b[j] + carry;
        sum[k] = s % 10;
        carry = s / 10;
        k--;
        i--;
        j--;
    }

    while(i >= 0)
    {
        s = a[i] + carry;
        sum[k] = s % 10;
        carry = s / 10;
        i--;
        k--;
    }

    int l = na - 1;
    while(sum[l] == 0 && l >= 0)
    {
        l--;
    }
    while(l >= 0)
    {
        cout << sum[l];
        l--;
    }

    if(carry != 0)
        cout << carry;



}

int main()
{
    sync;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
        cout << "\n";

    }

    return 0;
}