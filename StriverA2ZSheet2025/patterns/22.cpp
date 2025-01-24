#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = n;
    for (int i = 0; i < n; i++)
    {
        int cnt = (2 * n - 1) - (2 * k - 1);
        // cout << cnt << endl;
        int p = 0;
        int sol = 0;
        for (int j = 0; j < cnt / 2; j++)
        {
            sol = n - p;
            cout << sol << " ";
            p++;
        }

        for (int j = 0; j < 2 * (k)-1; j++)
        {
            cout << k << " ";
        }
        p = 0;
        for (int j = 0; j < cnt / 2; j++)
        {
            
            cout << sol << " ";
            sol = sol + 1;
            // p++;
        }
        cout << endl;
        k--;
    }

    k = 2;
    for (int i = 0; i < n-1; i++)
    {
        int cnt = (2 * n - 1) - (2 * k - 1);
        // cout << cnt << endl;
        int p = 0;
        int sol = 0;
        for (int j = 0; j < cnt / 2; j++)
        {
            sol = n - p;
            cout << sol << " ";
            p++;
        }

        for (int j = 0; j < 2 * (k)-1; j++)
        {
            cout << k << " ";
        }
        p = 0;
        for (int j = 0; j < cnt / 2; j++)
        {

            cout << sol << " ";
            sol = sol + 1;
            // p++;
        }
        cout << endl;
        k++;
    }
}