/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out1d(arr,size) {for(int i=0;i<size;i++) cout<<arr[i]<<" ";}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ll N = 1e5 + 7;


unordered_map<char, char> mapl;
unordered_map<char, char> mapr;
void create(string s)
{
    FOR(i, 1, s.length() - 1, 1)
    {
        mapl[char(s[i])] = char(s[i - 1]);
        mapr[char(s[i])] = char(s[i + 1]);
    }
}

int main()
{

    create("qwertyuiop");
    create("asdfghjkl;");
    create("zxcvbnm,./");
    mapr['q'] = 'w';
    mapr['a'] = 's';
    mapr['z'] = 'x';
    mapl['p'] = 'o';
    mapl[';'] = 'l';
    mapl['/'] = '.';

    char ch;
    cin >> ch;
    string s;
    cin >> s;
    if(ch == 'R')
    {
        for(int i = 0; i < s.length(); i++)
        {
            char temp = s[i];
            cout << mapl[(char)temp];
        }
    }
    else
    {
    	for(int i = 0; i < s.length(); i++)
        {
            char temp = s[i];
            cout << mapr[(char)temp];
        }
    }


    return 0;
}