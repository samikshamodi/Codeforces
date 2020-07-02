/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int main()
{
	int n,x,a[N];
	cin>>n;
	FOR(i,0,n,1)
	{
		cin>>x;
		a[i]=x;
	}
	sort(a,a+n);
	int cnt=n;
	int i=0;
	for(;i<n;i++)
	{
		if(a[i]!=a[0])
			break;
		cnt--;
	}
	for(int j=n-1;j>=i;j--)
	{
		if(a[j]!=a[n-1])
			break;
		cnt--;
	}
	cout<<cnt;

	return 0;
}