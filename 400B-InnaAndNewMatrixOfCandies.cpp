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
    int n, m;
    cin >> n >> m;
    string str[n];
    for(int i = 0; i < n; i += 1)
        cin >> str[i];

	set<int>st;

    for(int j = 0; j < m; j += 1)
    {
        for(int i = 0; i < n; i += 1)
        {
        	int index1=str[i].find('G');
        	int index2=str[i].find('S');
        	if(index2<index1)
        		st.insert(-1);
        	else
        		st.insert(index2-index1);
        }
    }
    if(st.count(-1))
    	cout<<-1;
    else
    	cout<<st.size();

    return 0;
}