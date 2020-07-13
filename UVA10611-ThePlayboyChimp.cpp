/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

#define sync ios_base::sync_with_stdio(false);cin.tie(NULL);
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define mem(arr,val) memset(arr,val,sizeof(arr));

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;

int a[N], x, n;

int down()
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] < x)
            l = mid + 1;
        else if(a[mid] >= x)
            r = mid - 1;
    }
    if(r < 0)
        return -1;

    return a[r];
}

int up()
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] > x)
            r = mid - 1;
        else if(a[mid] <= x)
            l = mid + 1;
    }

    if(l >= n)
        return -1;

    return a[l];
}


int main()
{
    sync;
    int q;
    cin >> n;
    for(int i = 0; i < n; i += 1)
        cin >> a[i];
    cin >> q;
    while(q--)
    {
        cin >> x;
        int first = down();
        int second = up();
        if (first == -1) cout << "X";
		else cout << first;
		if (second == -1) cout << " X" << endl;
		else cout << " " << second << endl;
    }


    return 0;
}