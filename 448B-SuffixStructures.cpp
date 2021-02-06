 /* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
     if(a.first == b.first)
        return a.second < b.second;

    else
        return a.first < b.first;

}

int main()
{
    sync;
    string s1,s2;
    cin>>s1>>s2;

    int a[26]={0},b[26]={0};
    for (int i = 0; i < s1.length(); i++)
    {
        a[s1[i]-'a']+=1;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        b[s2[i]-'a']+=1;
    }

    for (int i = 0; i < 26; i++)
    {
        if(a[i]<b[i])
        {
            cout<<"need tree";
            return 0;
        }
    }
    
    
   int flag=0;
    for (int i = 0; i < 26; i++)
    {
        if(a[i]!=b[i])
        {
           flag=1;
        }
    }

    if(flag==0)
    {
        cout<<"array";
        return 0;
    }

    string trim="";
    int in=0;

    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]==s2[in])
        {
            trim+=s1[i];
            in++;
        }
    }

    if(trim.length()==s2.length())
    {
        cout<<"automaton";
        return 0;
    } 


    cout<<"both";
    
    
    

    return 0;
}