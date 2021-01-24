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

int main()
{
    sync;
    int n;
    cin >> n;

    int turn[n] = {0};

    int a[n][n];

    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < n; j += 1)
        {
            cin >> a[i][j];
            if(a[i][j] == 1)
                turn[i] += 1;
            if(a[i][j]==2){
       
            	turn[j]+=1;
            }
            if(a[i][j]==3)
            {
                turn[i]+=1;
                turn[j]+=1;
            }
        }


    int ans = 0;
    for(int i = 0; i < n; i += 1)
        if(turn[i] == 0)
            ans++;
    
    cout << ans<<endl;
    for(int i = 0; i < n; i += 1)
    	if(turn[i]==0)
    		cout<<i+1<<" ";


    return 0;
}