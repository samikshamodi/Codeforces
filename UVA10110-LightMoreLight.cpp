/* samikshamodi - Samiksha Modi */
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    unsigned int n ;
    while ( cin >> n && n != 0 )
    {
        unsigned int sq = ( int ) sqrt( n ) ;
        cout << ( sq * sq == n ? "yes\n" : "no\n" ) ;
    }
    return 0 ;
}