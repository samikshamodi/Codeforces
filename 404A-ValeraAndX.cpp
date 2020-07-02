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

char a[305][305];
int n;

void solve()
{
	if(a[0][0]==a[0][1])
	{
		cout<<"NO";
		return;
	}
	FOR(i,1,n,1)
	{
		if(a[i][i]!=a[0][0])
		{
			cout<<"NO";
			return;
		}
	}

	int i=0,j=n-1;
	for(;i<n;i++,j--)
	{
		if(a[i][j]!=a[0][0])
		{
			cout<<"NO";
			return;
		}
	}

	FOR(i,0,n,1)
	{
		FOR(j,0,n,1)
		{
			if(i!=j && i+j!=n-1)
			{
				if(a[i][j]!=a[0][1])
				{
					cout<<"NO";
					return;
				}
			}
		}
	}
	cout<<"YES";
	return;
}

int main()
{
	cin>>n;
	in2d(a,n,n);
	//out2d(a,n,n);
	solve();

	

	return 0;
}