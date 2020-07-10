/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define mp make_pair

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

bool sortbysec(const pair<int,int>&a,const pair<int,int>&b)
{
	return (a.second<b.second);
}
	
int main()
{
    sync;
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for(int i=0;i<m;i+=1)
    {
    	int x,y;
    	cin>>x>>y;
    	v.pb(mp(x,y));
    }
    sort(v.begin(),v.end(),sortbysec);
    int boxes=0,matches=0;
    for(int i=v.size()-1;i>=0;i--)
    {
    	//cout<<v[i].first<<" "<<v[i].second<<endl;
    	while(boxes<n && v[i].first>0)
    	{
    		boxes++;
    		matches+=v[i].second;
    		v[i].first--;
    	}
    }
    cout<<matches;
    

    return 0;
}