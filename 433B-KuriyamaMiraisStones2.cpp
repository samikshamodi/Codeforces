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

    int v[n], a[n], m, q, l, r;
    ll sum = 0;

    for(int i = 0; i < n; i += 1)
    {
        cin >> v[i];
        a[i] = v[i];
    }
    sort(a, a + n);

    ll nsum[n+1]={0},asum[n+1]={0};
    nsum[0]=0;
    asum[0]=0;
    for(int i=1;i<=n;i+=1)   
    {
        nsum[i]=nsum[i-1]+v[i-1];
        asum[i]=asum[i-1]+a[i-1];
    } 
   // out1d(nsum,n);

    cin >> m;
    for(int i = 0; i < m; i += 1)
    {
        cin >> q >> l >> r;

        switch(q)
        {
        case 1:
           cout<<nsum[r]-nsum[l-1]<<endl;
            break;

        case 2:
            cout<<asum[r]-asum[l-1]<<endl;
            break;
        }
    }

    return 0;
}