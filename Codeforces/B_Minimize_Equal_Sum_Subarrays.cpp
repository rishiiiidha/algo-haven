#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;

class Comparator {
private:
    const vector<int>& p;
public:
    Comparator(const vector<int>& p) : p(p) {}
    bool operator()(int i, int j) const {
        return p[i-1] > p[j-1];
    }
};

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    vector<int> q(n);
    vector<int> idx(n);
    for (int i = 0; i < n; i++) {
        idx[i] = i + 1;
    }
    
    sort(idx.begin(), idx.end(), Comparator(p));
    
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            q[idx[i]-1] = left + 1;
            left++;
        } else {
            q[idx[i]-1] = right + 1;
            right--;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
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
