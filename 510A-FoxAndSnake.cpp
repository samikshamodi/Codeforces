/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<"";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;
	
int main()
{
    sync;
    int n,m;
    cin>>n>>m;
    char a[n][m];
    mem(a,'.');

    for(int i=0;i<n;i+=2)
    	for(int j=0;j<m;j+=1)
    		a[i][j]='#';

    for(int i=1;i<n;i+=4)
    	a[i][m-1]='#';

    for(int i=3;i<n;i+=4)
    	a[i][0]='#';

    out2d(a,n,m);

    return 0;
}