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

ll nc2(int n)
{
    return (n*(n-1))/2;
}

int main()
{
    sync;
    int n;
    while(cin >> n && n != 0)
    {
        int a[n];
        int cnt=0;
        for(int i = 0; i < n; i += 1)
            cin >> a[i];

        ll pair = nc2(n);
        for(int i=0;i<n;i+=1)
        {
        	for(int j=i+1;j<n;j+=1)
        	{
        		if(__gcd(a[i],a[j])==1)
        			cnt++;
        	}
        }
        //cout<<cnt<<endl;
        if(cnt==0)
        {	
        	cout<<"No estimate for this data set.\n";
        	continue;
        }

        double ans;
        ans=(6.0*pair)/cnt;
        ans=sqrt(ans);
        cout<<fixed<<setprecision(6)<<ans<<"\n";
       
    }

    return 0;
}