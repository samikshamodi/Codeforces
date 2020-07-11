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


int n;
int a[N];
unordered_map<int, int> umap;
ll V=0,P=0;

int main()
{
    sync;
    int m;
    cin >> n;
    for(int i = 0; i < n; i += 1)
    {
        cin >> a[i];
        umap[a[i]] = i + 1;
    }
    cin >> m;
    int x;
    while(m--)
    {
        cin>>x;
        V+=umap[x];
        P+=n-umap[x]+1;

    }
    cout << V << " " << P;
    cout << "\n";


    return 0;
}