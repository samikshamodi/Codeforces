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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.first == b.first)
        return a.second < b.second;

    else
        return a.first < b.first;

}

vector<pii> al[26], v;
int ans = 0;

double dist(const pair<int, int> &a, const pair<int, int> &b)
{
    return sqrt(pow(a.f - b.f, 2) + pow(a.s - b.s, 2));
}

double check(int x)
{
    double d = INF;
    for(auto j : al[x])
        for(auto i : v)
        {
            d = min(d, dist(i, j));
        }
    return d;

}

int main()
{
    sync;
    int n, m, dd;
    cin >> n >> m >> dd;

    int a[n][m];
    char c;
    for(int i = 0; i < n; i += 1)
        for(int j = 0; j < m; j += 1)
        {
            cin >> c;
            if(c == 'S')
            {
                v.pb(mp(i, j));
            }
            else
            {
                al[c - 'a'].pb(make_pair(i, j));
            }

        }

    double cap[26];
    for(int i = 0; i < 26; i += 1)
    {
        cap[i] = check(i);
        //  cout<<cap[i]<<" ";
    }



    int q;
    cin >> q;
    while(q--)
    {
        char x;
        cin >> x;
        if(isupper(x))
        {

            if(cap[x - 'A'] == INF)
            {
                cout << -1;
                return 0;
            }

            else if(cap[x-'A']>dd)
            	ans++;
        }

        else
        {
            if(al[x - 'a'].empty())
            {
                cout << -1;
                return 0;
            }
        }
    }

    cout << ans;

    return 0;
}