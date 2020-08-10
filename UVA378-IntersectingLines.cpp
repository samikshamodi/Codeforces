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
	
int main(){  
 
   int n, x1, y1, x2, y2, x3, y3, x4, y4, a, b, c, d, e, f, det;  
   double k;  
   cin>>n;  
   printf("INTERSECTING LINES OUTPUT\n");  
   while(n--){  
     cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;  
     a = y1 - y2;  
     b = x2 - x1;  
     c = x2*y1 - x1*y2;  
     d = y3 - y4;  
     e = x4 - x3;  
     f = x4*y3 - x3*y4;  
     k = (a*1.0)/(d*1.0);  
     if ( k*d == a && k*e == b && k*f == c ){  
       cout<<"LINE\n";  
       continue;  
     }  
     det = a*e - b*d;  
     if( !det ){  
       cout<<"NONE\n";  
       continue;  
     }  
     double x=(double)((c*e-b*f)*1.0/(det*1.0));
     double y=(double)((a*f-c*d)*1.0/(det*1.0));
     cout<<"POINT "<<fixed<<setprecision(2)<<x<<" "<<y<<endl; 
   }  
   cout<<"END OF OUTPUT\n";  

   return 0;  
 } 