/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define mp make_pair
#define f first
#define s second

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=1;i<row;i++) {for(int j=1;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

bool sortby(const pair<int, int> &a, const pair<int, int> &b)
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

    vector<pair<int, int>> waste;
    for(int i = 0; i < k; i += 1)
    {
        int a, b;
        cin >> a >> b;
        waste.pb(mp(a, b));
    }

    sort(waste.begin(), waste.end(), sortby);
    //for(auto i:waste)
    //	cout<<i.f<< " "<<i.s<<endl;
    //
    for(int itt = 0; itt < t; itt += 1)
    {
        int x, y;
        cin >> x >> y;
        int waste_cnt = 0;
        bool found = false;
        for(auto it : waste)
        {
            if(it.f == x && it.s == y)
            {
                found = true;
                break;
            }
            
            if(it.f<x || it.f==x && it.s<y)
                waste_cnt++;
        }

        int tot_sweep=((x-1)*m)+(y-1);

        if(found == true)
            cout << "Waste\n";
        else
        {
        	int res=(tot_sweep-waste_cnt)%3;
        
        	if(res==0)
        		cout<<"Carrots\n";
        	else if(res==1)
        		cout<<"Kiwis\n";
        	else if(res==2)
        		cout<<"Grapes\n";

        }

    }


    return 0;
}