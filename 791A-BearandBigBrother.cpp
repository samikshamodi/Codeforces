#include<iostream>
using namespace std;

int main()
{


    int a, b, y=0;
    cin >> a >> b;

    while(a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        y++;
     


    }
    cout << y;


    return 0;
}