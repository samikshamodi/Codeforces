#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
	string s;
	cin>>s;
	int cnt=0;
	char start='a';
	FOR(i,0,s.length(),1)
	{
		char dest=s[i];
		cnt+=min(abs(dest-start),26-abs(dest-start));
		start=dest;
	}
	cout<<cnt;

	return 0;
}