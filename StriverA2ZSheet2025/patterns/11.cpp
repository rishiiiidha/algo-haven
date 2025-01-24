#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int start;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            start = 0;
        }
        else
            start = 1;
        for (int j = 0; j < i + 1; j++)
        {
            start = !start;
            cout << start << " ";
        }
        cout << endl;
    }
}