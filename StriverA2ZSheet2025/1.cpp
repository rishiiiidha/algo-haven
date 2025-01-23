#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LONG_MAX >> 1;
static bool compare(const pair<string, int> &p1, const pair<string, int> &p2)
{
    return p1.second == p2.second ? p1.first < p2.first : p1.second > p2.second;
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++)
    {
        int times;
        cin >> times;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string input;
        getline(cin, input);
        v.push_back({input, times});
    }
    cout << "Took details now take user input" << endl;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string userinput;
    getline(cin, userinput);
    cout << userinput << endl;
    sort(v.begin(), v.end(), compare);
    int k = userinput.size();
    vector<string> res;
    string searchquery;
    for (int i = 0; i < k; i++)
    {
        searchquery += userinput[i];
        cout << "search query: " << searchquery << endl;
        if (userinput[i] == '#')
            break;
        for (auto ele : v)
        {
            int sz = searchquery.size();
            string inp = ele.first;
            int times = ele.second;
            int r = inp.size();
            if (r < sz)
                continue;
            bool sol = true;
            for (int i = 0; i < sz; i++)
            {
                if (searchquery[i] != inp[i])
                    sol = false;
            }
            if (sol)
            {
                res.push_back(inp);
            }
            int w = res.size();
            if (w == 3)
                break;
        }

        for (auto e : res)
        {
            cout << e << endl;
        }
        res.clear();
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}