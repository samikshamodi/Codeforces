#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
	int a[4];
	FOR(i,0,4,1)
	cin>>a[i];
	sort(a,a+4);
	int cnt=0;
	FOR(i,1,4,1)
	{
		if(a[i]==a[i-1])
			cnt++;
	}
	cout<<cnt;




	return 0;
}