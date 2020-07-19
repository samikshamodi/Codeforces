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
	
int main()
{
    sync;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i+=1)
    	cin>>a[i];

    int m[3]={};
    for(int i=0;i<n;i+=1)
    	m[i%3]+=a[i];

    if(m[0]>m[1] && m[0]>m[2])
    	cout<<"chest";


    else if(m[1]>m[0] && m[1]>m[2])
    	cout<<"biceps";


    else if(m[2]>m[0] && m[2]>m[0])
    	cout<<"back";

    return 0;
}