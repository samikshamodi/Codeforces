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
    int n, m;
    ll ans = 0;
    cin >> n >> m;
    int rem[5]={};
    int temp=ceil(m/5);
    for(int i=1;i<=m;i+=1)
    	rem[i%5]++;

    for(int i=1;i<=n;i+=1)
    {
    	int x=i%5;
    	//cout<<x<<" ";
    	x=(5-x)%5;
    	ans+=rem[x];
    }
    cout<<ans;


    return 0;
}