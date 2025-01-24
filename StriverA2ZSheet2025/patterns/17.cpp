#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << "  ";
        }
        int cnt = -1;
        int uuu = 2 * i + 1;
        int cal = uuu / 2 + (uuu) % 2;
        // cout << cal << endl;
        int rr = -1;
        for (int k = 0; k < 2 * (i) + 1; k++)
        {
            if (cnt < cal - 1)
            {
                cnt++;
                cout << (char)('A' + cnt) << " ";
                // cout << cnt << endl;
            }
            else
            {
                
                if(rr==-1) rr = cnt;
                // cout << rr << endl;
                rr--;
                cout << (char)('A' + rr) << " ";
            }
        }
        cout << endl;
    }
}