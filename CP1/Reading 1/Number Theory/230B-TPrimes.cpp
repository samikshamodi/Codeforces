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
	
int main()
{
    sync;
    bool prime[1000006];
    mem(prime,true);
    for(int i=2;i*i<1000006;i+=1)
    {
    	if(prime[i]==true)
    	{
    		for(int j=i*i;j<=1000006;j+=i)
    			prime[j]=false;
    	}
    }

    ll n,x;
    cin>>n;
    while(n--)
    {
    	
    	cin>>x;
    	bool flag1=(sqrt(x)==int(sqrt(x))?true:false);	//true if a number is a perfect sq
    	bool flag2=(prime[int(sqrt(x))]==true?true:false);
    	if(x==1)
    		cout<<"NO";
    	else if(flag1 && flag2)
    		cout<<"YES";
    	else
    		cout<<"NO";
    	
    	cout<<"\n";
    }
    

    return 0;
}