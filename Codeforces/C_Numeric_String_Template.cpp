#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;

bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second > p2.second;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_set<int> distinct_template;
    for (int x : a) {
        distinct_template.insert(x);
    }
    int distinct_count = distinct_template.size();

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;

        if (s.length() != n) {
            cout << "NO\n";
            continue;
        }

        unordered_map<int, char> mapping;
        unordered_set<char> used_chars;
        bool valid = true;

        for (int j = 0; j < n; j++) {
            if (mapping.count(a[j])) {
                if (mapping[a[j]] != s[j]) {
                    valid = false;
                    break;
                }
            } else {
                if (used_chars.count(s[j])) {
                    valid = false;
                    break;
                }
                mapping[a[j]] = s[j];
                used_chars.insert(s[j]);
            }
        }

        if (valid && used_chars.size() == distinct_count) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}