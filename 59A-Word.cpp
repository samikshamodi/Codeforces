#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{

    string s;
    cin >> s;
    int l = 0, u = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if(islower(s[i]))
            l++;
        else
            u++;
    }
    if( u > l)
    {
        FOR(i, 0, s.size(), 1)
        {
          
            cout << char(toupper(s[i]));
        }
    }
    else
    {
        FOR(i, 0, s.size(), 1)
        {
            cout<<char(tolower(s[i]));
  
        }
    }



    return 0;
}