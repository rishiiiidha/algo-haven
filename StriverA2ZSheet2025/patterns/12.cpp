#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // spaces : 2*(n-i-1)

    for (int i = 0; i < n; i++)
    {
        for (int p = 0; p < i + 1; p++)
        {
            cout << p + 1 << " ";
        }
        // spaces
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << "  ";
        }
        for (int p = i; p >= 0; p--)
        {
            cout << (p + 1) << " ";
        }
        cout << endl;
    }
}