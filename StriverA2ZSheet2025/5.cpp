// Nth Fibonacci Number

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 1;
    int b = 1;
    if (n == 1)
    {
        cout << a << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << b << endl;
        return 0;
    }
    int c = 0;
    for (int i = 2; i < n; i++)
    {
        c = b + a;
        a = b;
        b = c;
    }
    cout << c;
}