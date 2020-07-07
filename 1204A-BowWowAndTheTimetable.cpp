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

    string s;
    cin >> s;

    int l = s.length();
    int sum = 0;
    for(int i = 0; i < l; i += 1)
    {
        sum += s[i] - '0';
    }

    if(sum==0 || (sum==1 && l<=2))
    	cout<<0;
    else
    {
    	//power of 2	then log2(s)==l-1
    	
    	if(sum==1)
    	
    		cout<<ceil((l-1)/2.0);
    	
    	else
    		cout<<ceil(l/2.0);

    }
    

    return 0;
}