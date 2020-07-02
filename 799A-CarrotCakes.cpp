#include <bits/stdc++.h>
using namespace std;

#define FOR(iterator,start,end,increment) for (int iterator=start;iterator<end;iterator+=increment)
#define out2d(arr,row,col) {for(int i=0;i<row;i++) {for(int j=0;j<col;j++) cout<<arr[i][j]<<" ";cout<<endl;}}
#define in2d(arr,row,col) for(int i=0;i<row;i++) for(int j=0;j<col;j++) cin>>arr[i][j];

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    //first oven makes more cake than required
    if(k > n)
        cout << "NO";
    else
    {
        //no of cakes made while second oven is being built
        int time1 = 0;
        int cake = 0;
        while(cake<n)
        {
            time1++;
            if(time1%t==0)
            	cake+=k;
        }
        //cout<<time1;


        int cakes=0;
        bool oven2built=false;
        int time2=0;
        while(cakes<n)
        {
        	time2++;
        
        	if(time2>d)
        		oven2built=true;

        	if(time2%t==0)
        		cakes+=k;

        	if(oven2built==true && (time2-d)%t==0)
        		cakes+=k;

        	//cout<<time2<<" "<<oven2built<<" "<<cakes<<endl;


        }
       // cout<<time1<<" "<<time2;

        if(time1<=time2)
        	cout<<"NO";
        else
        	cout<<"YES";
        



    }

    return 0;
}