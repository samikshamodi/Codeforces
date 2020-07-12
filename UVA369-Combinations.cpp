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
    ll n, m, a, b, c;
    ll nr = 1, dr = 1;
    while(cin >> n >> m)
    {
        nr=1;
        dr=1;
        if(n + m == 0)
            break;

        a = n;
        b = n - m;
        c = m;
        if(b > c)
            swap(b, c);
        a = c + 1;

        ll i = a, j = 1;
        while(i <= n || j <= b)
        {
            if(i <= n)
            {
                //cout << i << " ";
                nr *= i;
            }

            if(j <= b)
            {
                //cout << j << endl;
                dr *= j;
            }

            ll div = __gcd(nr, dr);
            //cout << nr << " " << dr << endl;
            nr /= div;
            dr /= div;
            //cout << nr << " " << dr << endl;
            //cout<<endl;
            i++;
            j++;


        }

        //cout << nr << "\n";
        cout<<n<<" things taken "<<m<<" at a time is "<<nr<<" exactly.\n";
       
    }

    return 0;
}