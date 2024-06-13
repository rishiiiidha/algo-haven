#include<bits/stdc++.h>

using namespace std;
#define all(x)(x).begin(), (x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LONG_MAX >> 1;
void solve() {
    // Remember that understand question properly they asked only prefix that is first answer only first possible answer
    // <><><<<><><> --> 6 this case wont work because this is not prefix (<><><>)
    string s;
    cin >> s;
    int l = s.size();
    int ones = 0;
    int ans = 0;
    for (int i = 0; i < l; i++) {
        if (s[i] == '<') {
            ones++;
        } else if (s[i] == '>') {
            ones--;
        }
        if (ones < 0) {
            break;
        } else if (ones == 0) {
            ans = i + 1;
        }
    }
    cout << ans << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}