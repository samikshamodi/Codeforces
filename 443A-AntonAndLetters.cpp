#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
	set<int> st;
	while(true)
	{
		char ch;
		cin>>ch;
		if(ch=='}')
			break;

		if(isalpha(ch))
			st.insert(ch);

	}
	cout<<st.size();

	

	return 0;
}