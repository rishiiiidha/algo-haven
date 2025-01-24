#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // spaces are like n - i - 1
    // stars are like 2*(i)+1 formats

    for (int i = 0; i < n; i++)
    {

        // spaces
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "  ";
        }
        // stars
        for (int k = 0; k < 2 * (i) + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 0; i--)
    {

        // spaces
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "  ";
        }
        // stars
        for (int k = 0; k < 2 * (i) + 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}