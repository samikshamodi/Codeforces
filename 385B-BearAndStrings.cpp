/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

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

ll ans = 0;
int main()
{
    sync;
    string str;
    cin >> str;
    int n = str.length();
    int ans = 0;
    for(int i=0;i<n;i+=1)
    {
    	bool ok=false;
    	for(int j=i+3;j<n;j+=1)
    	{
    		if(!ok	&& str[j-3]=='b' &&str[j-2]=='e'&&str[j-1]=='a' &&str[j]=='r')
    			ok=true;
    		if(ok)
    			ans++;
    	}
    }	
    cout<<ans;

    return 0;
}