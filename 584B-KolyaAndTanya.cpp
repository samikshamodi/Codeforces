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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.first == b.first)
        return a.second < b.second;

    else
        return a.first < b.first;

}
	
ll fastmod(ll b, ll e)
{
	if(e==0)
		return 1;
	if (e==1)
		return b%MOD;
	ll temp=fastmod(b,e/2);
	temp=(temp*temp)%MOD;

	if(e%2==0)
		return temp;
	else
		return (temp*(b%MOD))%MOD;
}
int main()
{
    sync;
    int n;
    cin>>n;
    //there are 3n gnomes and each gnomes have 3 options. for each n, there are 7 cases not satisfying the required condition

    ll tot=fastmod(3,3*n);
    ll notpos=fastmod(7,n);
    cout<<((tot%MOD)-(notpos%MOD)+MOD)%MOD;


    return 0;
}