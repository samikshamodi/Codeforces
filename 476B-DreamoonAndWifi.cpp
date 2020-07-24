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

int que = 0;
double tot, req;
double nr = 0;

void check(int arr[])
{
    //out1d(arr,que)
    //cout<<endl;
    int s = 0;
    for(int i = 0; i < que; i += 1)
        s += arr[i];

    if(s == req)
        nr++;

}


void form(int arr[], int i)
{
    if(i == que)
    {
        check(arr);
        return;
    }
    arr[i] = -1;
    form(arr, i + 1);

    arr[i] = 1;
    form(arr, i + 1);
}

int main()
{
    sync;
    string a, b;
    cin >> a >> b;
    int asum = 0, bsum = 0;
    int n = a.length();
    for(int i = 0; i < n; i += 1)
    {
        if(a[i] == '+')
            asum++;
        else if(a[i] == '-')
            asum--;

        if(b[i] == '+')
            bsum++;
        else if(b[i] == '-')
            bsum--;
        else
            que++;
    }

    //when no questions and they end up at same position
    if(que == 0)
    {
        asum == bsum ? cout << 1.000000000000 : cout << 0.000000000000;
        return 0;
    }

    if(abs(asum - bsum) > que)
    {
        cout << fixed << setprecision(12) << 0.0;
        return 0;
    }

    tot = pow(2, que);  //total ways
    req = asum - bsum;    //required sum
    int arr[que] = {};
    form(arr, 0);
    cout << fixed << setprecision(12) << nr / tot;




    return 0;
}