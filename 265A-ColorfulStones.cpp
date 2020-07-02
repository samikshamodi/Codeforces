#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
	string s,t;
	cin>>s>>t;
	int cnt=0;
	FOR(i,0,t.length(),1)
	{
		if(t[i]==s[cnt])
			cnt++;
	}
	cout<<cnt+1;

	return 0;
}