
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
const ll N = 1000000 + 10;

int divisor[N], ANS[11][N] ;
int main()
{

    for(int i = 2; i <= N; i++)
    {
        if(divisor[i] == 0)
        {
            for(int j = i; j <= N; j += i) 
            	divisor[j]++;
        }
    }

    for(int n = 0; n <= 10; n++)
    {
        for(int i = 1; i <= N; i++) 
        	ANS[n][i] = ANS[n][i - 1] + (bool) ( divisor[i] == n ) ;
    }
    int T ;
    cin >> T;
    while( T-- )
    {
        int a, b, n ;
        cin >> a >> b >> n;
        cout << ANS[n][b] - ANS[n][a - 1] << '\n';
    }
    return 0;
}