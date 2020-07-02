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
int n,m,nn=55;
bool prime[55];
void solve()
{
	int next;
	if(prime[n]==false)
	{
		cout<<"NO";
		return;
	}

	for(int i=n+1;i<=nn;i++)
	{
		if(prime[i]==true)
		{
			next=i;
			break;
		}
	}
	if(m==next)
	{
		cout<<"YES";
		return;
	}
	cout<<"NO";
	return;
}
int main()
{
	
	
	memset(prime,true,sizeof(prime));

	for(int i=2;i*i<=nn;i++)
	{
		if(prime[i]==true)
		{
			for(int j=i*i;j<=nn;j+=i)
			{
				prime[j]=false;
			}
		}
	}

	
	cin>>n>>m;
	solve();

	return 0;
}