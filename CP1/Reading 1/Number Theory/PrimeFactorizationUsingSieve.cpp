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
const ll N = 100001;

int spf[N];	
int factors[N];
void sieve()
{	
	spf[1]=1;

	//Marking smalles prime factor for every number to be itself
	for(int i=2;i<N;i+=1)
		spf[i]=i;

	//Marking spf for every even number as even
	for(int i=4;i<N;i+=2)
		spf[i]=2;

	for(int i=3;i*i<N;i+=1)
	{
		//checking if i is prime
		if(spf[i]==i)
		{
			for(int j=i*i;j<N;j+=i)
			{
				if(spf[j]==j);
				spf[j]=i;
			}
		}
	}

}

vector<int> factorise(int x)
{
	vector<int> ret;
	while(x!=1)
	{
		ret.pb(spf[x]);
		x=x/spf[x];
	}
	return ret;
	//return ret.size();

}

/*int factorise(int x)
{
	vector<int> ret;
	while(x!=1)
	{
		ret.pb(spf[x]);
		x=x/spf[x];
	}
	//return ret;
	return ret.size();

}*/

int main()
{
    sync;
  	sieve();
  	vector<int> p=factorise(12246);
  	out1d(p,p.size());
  	


    return 0;
}