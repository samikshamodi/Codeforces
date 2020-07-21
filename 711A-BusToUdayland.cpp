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
    bool ok = false;
    string s1, s = "", empty = "OO";
    for(int i = 0; i < n; i += 1)
    {
        cin >> s1;
        if(s1[0]=='O' && s1[1]=='O' && ok == false)
        {
            s = s +"++" + s1[2]+s1[3]+s1[4];
            ok = true;
          
        }
        else if(s1[3]=='O' && s1[4]=='O' && ok == false)
        {
            s = s+ s1[0]+s1[1]+s1[2] + "++";
            ok = true;
        }
        else
            s= s+ s1;
    }

    if(ok == false)
        cout << "NO";
    else
    {
        cout << "YES\n";
        int cnt = 0;

        for(int i = 0; i < s.length(); i += 1)
        {
            if(cnt == 5)
            {
                cout << endl;
                cnt = 0;
            }
            cout << s[i];
            cnt++;
        }

    }

    return 0;
}