/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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

float edist(int x1, int y1, int x2, int y2)
{
    return sqrt((pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}

void solve()
{

}
double dist(const pair<int,int> &a,const pair<int,int> &b){
	return sqrt(pow(a.first-b.first, 2)+ pow(a.second-b.second, 2));
}
vector<pair<int,int>> let[26], shift;
double check(int i){
	double mn=INF;
	for(auto it:let[i]){
		for(auto j: shift)
			mn=min(mn,dist(it,j));
	}
	return mn;
}
int main()
{
    ll n,m,x;
    cin>>n>>m>>x;
    
   	char key[31][31];
   	in2d(key,n,m);
   	for(int i=0;i<n;i++){
   		for(int j=0;j<m;j++){
   			if(key[i][j]=='S')
   				shift.push_back(make_pair(i,j));
   			else
   				let[key[i][j]-'a'].push_back(make_pair(i,j));
   		}
   	}
   	double cap[26];
   	for(int i=0;i<26;i++){
   		cap[i]=check(i);
   		//cout<<cap[i]<<" "<<i<<'\n';
   	}
   	ll len,ans=0;
   	cin>>len;
   	char ab;
   	for(int i=0;i<len;i++){
   		cin>>ab;
   		if(ab>='A' && ab <='Z'){
   			if(cap[ab-'A']==INF){
   				cout<<-1;
   				return 0;
   			}
   			if(cap[ab-'A']>x)
   				ans++;
   		}
   		else{
   			if(let[ab-'a'].empty()){
   				cout<<-1;
   				return 0;
   			}
   		}
   	}
   	cout<<ans;
   
}