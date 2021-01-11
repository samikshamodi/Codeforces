/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

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
    cin>>n;

    vector<pii>v;
    int a;

    for(int i=0;i<n;i++){
        cin>>a;
        v.pb(mp(a,i));
    }

    sort(v.begin(),v.end());
    int max_pos=v[n-1].second;
    int min_pos=v[0].second;


    if(max_pos<min_pos)
        swap(max_pos,min_pos);
    
    cout<<max(n-min_pos-1,max_pos);

    return 0;
}