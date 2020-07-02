/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int main()
{
    int n, l, a[N] = {}, i;
    cin >> n >> l;
    
    for(i = 0; i < n; i += 1)
    {
        cin >> a[i];
    }
   sort(a,a+n);

    int maxi = INT_MIN;
    for(int i = 1; i < n; i += 1)
    {
       //cout<<maxi<<" ";
       //cout<<" "<<a[i]<<" "<<a[i-1];
       if(a[i] - a[i - 1] > maxi)
        {
            maxi = a[i] - a[i - 1];
        }

    }
    double ans=0;
    ans=max(a[0]-0,l-a[n-1]);
    ans=max(maxi/2.0,ans);


    cout << fixed << setprecision(10) << ans << endl;


    return 0;
}