#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];


int gcd(int a, int b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    int n, d;
    n = 6 - max(a, b) + 1;
    d = 6;

    int div = gcd(n, d);
    n /= div;
    d /= div;
    if(n == 0)
        cout << 0 << "/" << 1;
    else if(n == 1 && d == 1)
        cout << 1 << "/" << 1;
    else
        cout << n << "/" << d;

    return 0;
}