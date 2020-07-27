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
const ll INF = 1e9;
const ll N = 1e5 + 7;

int main()
{
    sync;
    int n;
    cin >> n;
    int d[105][3], arr[n];


    for(int i = 0; i < n; i += 1){
        cin >> arr[i];
        d[i][0]=d[i][1]=d[i][2]=INF;
    }
    d[n][0]=d[n][1]=d[n][2]=INF;
    d[0][0] = 0;

    for(int i = 0; i < n; i += 1)
    {
        //col 0 is min no of rest days if activity done on i+1 day is rest
        //col 1 is min no of rest days if activity done on i+1 day is contest
        //col 2 is min no of rest days if activity done on i+1 day is gym
        //Initialise d[i+1][0] with the minium value of all 3 col
        //increase no of rest days by 1.
        d[i + 1][0] = min(min(d[i][0], d[i][1]), d[i][2]) + 1;

        if(arr[i] == 1)
            d[i + 1][1] = min(d[i][0], d[i][2]);

        else if(arr[i] == 2)
            d[i + 1][2] = min(d[i][0], d[i][1]);

        else if (arr[i] == 3)
        {
            d[i + 1][1] = min(d[i][0], d[i][2]);
            d[i + 1][2] = min(d[i][0], d[i][1]);
        }
    }
   
    cout << min(min(d[n][0], d[n][1]), d[n][2]);

    return 0;
}