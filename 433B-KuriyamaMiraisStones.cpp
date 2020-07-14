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
    int n;
    cin >> n;
    int v[n], u[n];
    for(int i = 0; i < n; i += 1)
    {
        cin >> v[i];
        u[i] = v[i];
    }
    sort(u, u + n);

    ll ansv[n] = {};
    ansv[0] = v[0];
    for(int i = 1; i < n; i += 1)
        ansv[i] = ansv[i - 1] + v[i];

    ll ansu[n] = {};
    ansu[0] = u[0];
    for(int i = 1; i < n; i += 1)
        ansu[i] = ansu[i - 1] + u[i];

    /*out1d(ansv,n);
    cout<<endl;
    out1d(ansu,n);*/


    int m;
    cin >> m;
    while(m--)
    {

        int type;
        cin >> type;

        if(type == 1)
        {
            int l, r;
            cin >> l >> r;
            if(l - 2 >= 0)
                cout << ansv[r - 1] - ansv[l - 2] << "\n";
            else
            	cout<<ansv[r-1]<<"\n";

        }

        else if(type == 2)
        {
            int l, r;
            cin >> l >> r;
            if(l - 2 >= 0)
                cout << ansu[r - 1] - ansu[l - 2] << "\n";
            else cout<<ansu[r-1]<<"\n";
        }
    }

    return 0;
}