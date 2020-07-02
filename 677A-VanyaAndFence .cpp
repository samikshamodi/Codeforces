#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, a[1001], s = 0;

    cin >> n >> h;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        if (a[i] > h)
            s = s + 2;
        else
            s = s + 1;
    }

    cout << s;


}