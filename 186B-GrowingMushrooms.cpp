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
 double n,t1,t2,k;

bool sortby(pair<double, int>&a,pair<double,int>&b)
{
	if(a.f==b.f)
		return a.s<b.s;
	return a.f>b.f;
}


int main()
{
    sync;
   
    cin>>n>>t1>>t2>>k;
    k=k/100.0;
    k=1-k;

    double height;
    vector<pair<double,int>>v;
    for(int i=1;i<=n;i+=1)	
    {
    	double a,b;
    	cin>>a>>b;
    	//cout<<(a*t1*k)+(b*t2)<<" "<<((b*t1*k)+(a*t2))<<endl;
    	height=max(((a*t1*k)+(b*t2)),((b*t1*k)+(a*t2)));
    	v.pb(mp(height,i));
    }
    sort(v.begin(),v.end(),sortby);
    for(auto i:v)
    {
    	cout<<i.s<<" ";
    	cout<<fixed<<setprecision(2)<<i.f<<endl;
    }

    return 0;
}