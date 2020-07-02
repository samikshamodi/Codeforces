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
	long n,m;
	cin>>n>>m;
	double w=m;
	for(long i=0;i<n*2;i+=1)
	{
		long x;
		cin>>x;
		if(x==1)
		{
			cout<<-1;
			return 0;
		}
		//same as w+=w/(x-1)
		w=w*x/(x-1);
	}
	//w-m is total weight of fuel required which is w-weight of rocket without fuel
	cout<<fixed<<setprecision(10)<<w-m;

	return 0;
}