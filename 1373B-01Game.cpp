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

string s;
void solve()
{
    stack<char> st;
    int cnt=0;
 
    for(int i = 0; i < s.length(); i++)
    {
        //cout<<s[i]<<"  ";
        if(st.empty())
        {
            st.push(s[i]);
        }
        else
        {
        	if(s[i]!=st.top())
        	{
        		//cout<<"TOP:"<<st.top()<<i;
        		st.pop();
        		cnt++;
        	}
        	else
        		st.push(s[i]);
        }
    }

   /* while(!st.empty())
    {
    	cout<<st.top();
    	st.pop();
    }*/

    if(cnt==0 || cnt%2==0)
    	cout<<"NET";
    else
    	cout<<"DA";

   

    //cout<<"count: "<<cnt<<" ";
   /* if(cnt%2==0)
    	cout<<"DA";
    else
    	cout<<"NET";*/
    return;

}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    
        cin >> s;
        solve();
        cout<<endl;
    }

    return 0;
}