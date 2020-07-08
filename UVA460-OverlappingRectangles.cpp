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


struct Point
{
    int x, y;
};

// Returns true if two rectangles (l1, r1) and (l2, r2) overlap
bool doOverlap(Point l1, Point r1, Point l2, Point r2)
{
    // If one rectangle is on left side of other
    if (l1.x >= r2.x || l2.x >= r1.x)
        return false;

    // If one rectangle is above other
    if (l1.y >= r2.y || l2.y >= r1.y)
        return false;

    return true;
}


int main()
{
    sync;
    int t;
    cin >> t;

    for(int i = 0; i < t; i += 1)
    {
        int xll1, yll1, xll2, yll2, xur1, yur1, xur2, yur2;
        cin >> xll1 >> yll1 >> xur1 >> yur1;
        cin >> xll2 >> yll2 >> xur2 >> yur2;
        Point l1 = {xll1, yll1};
        Point r1 = {xur1, yur1};
        Point l2 = {xll2, yll2};
        Point r2 = {xur2, yur2};
        if(i > 0)
            cout << "\n";
        if (doOverlap(l1, r1, l2, r2))
        {
            //cout<<"Rectangles Overlap";
            cout << max(l2.x, l1.x) << " " << max(l2.y, l1.y) << " " << min(r1.x, r2.x) << " " << min(r1.y, r2.y) << endl;
        }
        else
            cout << "No Overlap\n";

    }

    return 0;
}