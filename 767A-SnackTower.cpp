    /* samikshamodi - Samiksha Modi */
    #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
     
    #define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
    #define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
    #define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
    #define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
     
    const ll MOD = 1e9 + 7;
    const ll INF = 1e18;
    const ll N = 1e5 + 7;
     
    int main()
    {
        int n,x;
        cin>>n;
        int has[N]={};
        int next=n;
        while(n--)
        {
        	cin>>x;
        	has[x]=1;
        	while(has[next]==1)
        	{
        		cout<<next<<" ";
        		next--;
        	}
        	cout<<endl;
        }
     
        return 0;
    }