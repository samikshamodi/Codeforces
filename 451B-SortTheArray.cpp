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
    int a[n];

    for(int i = 0; i < n; i += 1)
        cin >> a[i];

    int L = -1;
    for(int i = 0; i < n - 1; i += 1)
        if(a[i] > a[i + 1])
        {
            L = i;
            break;
        }

    int R = -1;
    for(int i = n - 1; i > 0; i--)
    {
        if(a[i] < a[i - 1] )
        {
            R = i;
            break;
        }
    }

    if(L == -1 && R == -1)	//aray is already sorted
    {
        cout << "yes" << "\n" << 1 << " " << 1;
    }
    else
    {
        reverse(a + L, a + R+1);
        bool ok = true;

        for(int i = 0; i < n - 1; i += 1)
            if(a[i] > a[i + 1])
                ok = false;

        if(ok)
            cout << "yes\n" << L + 1 << " " << R + 1;

        else
            cout << "no";
    }

    return 0;
}