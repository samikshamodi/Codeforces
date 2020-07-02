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


int n, m, a, d, t;
int arr[5];
int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b % a, a);
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int solve(int m)
{
    int ans = 0;
    int counter, j;
   	//generating power set
    for(counter = 0; counter < 32; counter++)
    {
        int lc = 1;
        int sign = 1;
        for(j = 0; j < 5; j++)
        {
            if(counter & (1 << j))
            {
                //cout << arr[j] << " ";
                sign = -sign;
                int g = gcd(lc, arr[j]);

                if(m / lc < arr[j] / g)
                {
                    lc = m + 1;
                    break;
                }
                lc *= arr[j] / g;
            }
        }
        ans += sign * (m / lc);
    }
    return ans;
}

int main()
{

    cin >> t;
    while(t--)
    {
        cin >> n >> m >> a >> d;
        arr[0] = a, arr[1] = a + d, arr[2] = a + 2 * d, arr[3] = a + 3 * d, arr[4] = a + 4 * d;
        int t1 = solve(m);
        int t2 = solve(n - 1);
        cout << t1 - t2 << endl;


    }


    return 0;
}