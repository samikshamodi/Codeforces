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
    char x,s,y;
    vector<pair<int,char>>v;
    int a[3]={};
    for(int i=0;i<3;i+=1)
    {
    	cin>>x>>s>>y;
    	if(s=='>')
    		a[x-'A']+=1;
    	else
    		a[y-'A']+=1;
    }
    //out1d(a,3);
    set<int> st;
    st.insert(a[0]);
    st.insert(a[1]);
    st.insert(a[2]);
    if(st.size()!=3)
    {
    	cout<<"Impossible";
    	return 0;
    }
    v.pb(make_pair(a[0],'A'));
    v.pb(make_pair(a[1],'B'));
    v.pb(make_pair(a[2],'C'));

   sort(v.begin(),v.end());
   for(int i=0;i<3;i+=1)
   	cout<<v[i].second;

    return 0;
}