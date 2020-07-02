/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

void solve()
{
   int n;
   string s;
   stack<string> st;

   cin>>n;
   for(int i=0;i<n;i+=1)
   {
   	cin>>s;
   	if(i==0)
   		st.push(s);
   	else if(!st.empty() && s!=st.top())
   		st.push(s);
   }
   cout<<st.size();
}
	
int main()
{
    sync;
    int testCases=1;
    //cin >> testCases;
    while (testCases--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}