/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define RFOR(iterator,start,end,decrement) for (int iterator=start;iterator>=end;iterator-=decrement)
#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;


int n;
string s;
void solve()
{
    stack<char> st;
    int cnt = 0;
    RFOR(i, s.length() - 1, 0, 1)
    {
        if(!st.empty())
        {
            if(s[i] == '1')
            {
                if(st.top() == '0')
                {
                    while(cnt > 1 && st.top() == '0')
                    {
                        st.pop();
                        cnt--;
                    }
                }
                else st.push(s[i]);
            }
            else
            {
                st.push(s[i]);
                cnt++;
            }
        }
        else
        {
            st.push(s[i]);
            if(s[i] == '0')
                cnt++;
        }
    }

    while(!st.empty())
    {
        cout << st.top();
        st.pop();
    }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        solve();
        cout << endl;
    }

    return 0;
}