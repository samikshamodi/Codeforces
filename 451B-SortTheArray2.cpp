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

   vector<int> v;
   int x;
    for(int i = 0; i < n; i += 1)
    {
        cin>>x;
        v.pb(x);
    }

    int l=0;
    while(l+1<n && v[l]<v[l+1])
        l++;

    int r=l+1;
    while(r<n && v[r]<v[r-1])
        r++;

    reverse(v.begin()+l,v.begin()+r);

    for(int i=0;i<n-1;i+=1)
    {
        if(v[i]>v[i+1])
        {
            cout<<"no";
            return 0;
        }
    }    

    cout<<"yes\n"<<l+1<<" "<<r;

}