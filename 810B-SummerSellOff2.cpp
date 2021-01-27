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
   return min(a.first,a.second)>min(b.first,b.second);
}

int main()
{
    sync;
    int n,f;
    cin>>n>>f;

    vector<pii> v;
    int a[n],b[n];

    for(int i=0;i<n;i+=1)
    {
    	cin>>a[i]>>b[i];
    	v.pb(mp(min(2*a[i],b[i])-min(a[i],b[i]),i));
    }	
   sort(v.rbegin(),v.rend());

//   for(int i=0;i<n;i+=1)
  //  cout<<v[i].first<<" "<<v[i].second<<endl;	

    ll ans=0;
    for(int i=0;i<n;i+=1)
    {
    	if(i<f)
    		ans+=min(a[v[i].second]*2,b[v[i].second]);
    	else
    		ans+=min(a[v[i].second],b[v[i].second]);
    }	
    
    cout<<ans;

    return 0;
}