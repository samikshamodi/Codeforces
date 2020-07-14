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

int main()
{
    sync;
    int n, k;
    cin >> n >> k;
    int h[n], sum[n];

    for(int i = 0; i < n; i += 1)
        cin >> h[i];



    sum[0] = h[0];
    for(int i = 1; i < n; i += 1)
        sum[i] = sum[i - 1] + h[i];

    //out1d(sum,n);
    //
    int ans = sum[k-1];

    int index=0;

    for(int i = 1; i <= n - k; i += 1)
    {
        if((sum[i + k - 1] - sum[i - 1])<ans)
        {
        	ans=sum[i + k - 1] - sum[i - 1];
        	index=i;
        }
    }
    cout << index+1;


    return 0;
}