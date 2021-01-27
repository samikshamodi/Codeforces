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

int main()
{
    sync;
    int n, m, k, t;
    cin >> n >> m >> k >> t;

    vector<pii>v;
    int a, b;
    for(int i = 0; i < k; i += 1)
    {
        cin >> a >> b;
        v.pb(mp(a, b));
    }


    for(int i = 0; i < t; i += 1)
    {
        cin >> a >> b;
        int tot = (a - 1) * m + b;
        int found = 0;
        int wastecnt = 0;
        for(auto i : v)
        {
            if(i.first == a & i.second == b)
            {
                found = 1;
                break;
            }

            if(i.first < a)
                wastecnt++;
            else if (i.first == a && i.second <= b)
                wastecnt++;
        }

        if(found == 1)
            cout << "Waste\n";
        else
        {
            int res = (tot - wastecnt) % 3;
            if(res == 1)
                cout << "Carrots\n";
            else if(res == 2)
                cout << "Kiwis\n";
            else cout << "Grapes\n";
        }

    }

    return 0;
}