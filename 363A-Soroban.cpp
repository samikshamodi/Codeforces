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


void print(int x)
{
    if(x < 5)
        cout << "O-|";
    else
        cout << "-O|";
   	if(x>=5)
   		x-=5;
   	int i=0;
    for(; i < x; i += 1)
        cout << "O";
    cout << "-";
    for(; i < 4; i++)
        cout << "O";
}

int main()
{
    sync;
    int n;
    cin >> n;
    if(n==0)
    {
    	cout<<"O-|-OOOO";
    	return 0;

    }

    while(n)
    {
        print(n%10);
        n /= 10;
        cout << endl;
    }

    return 0;
}