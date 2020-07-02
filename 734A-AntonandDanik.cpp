#include<iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif

    int n, a = 0, d = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }


    if (a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";


}