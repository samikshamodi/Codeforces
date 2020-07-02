#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
	int a[5];
	FOR(i,1,5,1)
	{
		cin>>a[i];
	}
	string s;
	cin>>s;
	int c=0;
	FOR(i,0,s.length(),1)
	{
		//cout<<int(s[i])<<endl;
		c+=a[int(s[i])-48];
	}
	cout<<c;

	return 0;
}