/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define endl '\n'
#define pb push_back
#define mp make_pair
#define f first
#define s second

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int main()
{
	sync;
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cntX=0,cntx=0;
	for(int i=0;i<n;i+=1)
	{
		if(s[i]=='X')
			cntX++;
		else
			cntx++;
	}	
	if(cntX==cntx)
		cout<<0<<endl<<s;
	else
	{
		int cnt=n/2-min(cntx,cntX);
		cout<<cnt<<endl;
		if(cntx<cntX)
		{
			for(int i=0;i<n;i+=1)
			{
				if(cnt>0)
				{
					if(s[i]=='X')
					{
						cout<<'x';
						cnt--;
					}
					else
						cout<<s[i];
				}
				else
					cout<<s[i];

			}	
		}
		else
		{
			for(int i=0;i<n;i+=1)
			{
				if(cnt>0)
				{
					if(s[i]=='x')
					{
						cout<<'X';
						cnt--;
					}
					else
						cout<<s[i];
				}
				else
					cout<<s[i];

			}	
		}


	}

	return 0;
}