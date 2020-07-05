/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

bool valid(int x,int y)
{
	if(x==y)
		return false;

	if(x<=0 || x>9)
		return false;

	if(y<=0||y>9)
		return false;

	return true;
}
int main()
{
    sync;
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    int a,b,c,d;

    for(int i=1;i<=9;i+=1)
    {
    	a=i;
    	b=r1-a;
    	c=c1-a;
    	d=d1-a;

    	if(valid(a,b)&& valid(a,c) && valid(a,d) && valid(b,c)&& valid (b,d) && valid(c,d))
    	{
    		if(a+b==r1 && c+d==r2 && a+c==c1 && b+d==c2 && a+d==d1 && b+c==d2)
    		{
    			cout<<a<<" "<<b<<"\n"<<c<<" "<<d;
    			return 0;
    		}
    	}
    }

    cout<<-1;



    return 0;
}