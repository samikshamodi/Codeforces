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



void solve(int n)
{
    int count[n+1]={};
    for(int i=1;i<=n;i+=1)
    {
    	for(int j=i;j<=n;j+=i)
    		count[j]++;
    }

    int esc=0;
    for(int i=1;i<=n;i+=1)
    	if(count[i]%2==1)
    		esc++;

    cout<<esc<<"\n";
}
int main()
{
    sync;

    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        solve(x);
    }

    return 0;
}