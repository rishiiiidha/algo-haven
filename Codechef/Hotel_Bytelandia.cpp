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
void solve(){
    int n;
    cin >> n;
    vector<int> arrival(n);
    vector<int> departure(n);
    for (int i = 0; i < n;i++){
        cin >> arrival[i];
    }
    for (int i = 0; i < n;i++){
        cin >> departure[i];
    }
    vector<int> temp(1002,0);
    for (int i = 0; i < n; i++){
        temp[arrival[i]] += 1;
    }
    for (int i = 0; i < n;i++){
        temp[departure[i]] -= 1;
    }
    int ans = INT_MIN;
    for (int i = 1; i < 1002;i++){
        temp[i] = temp[i - 1] + temp[i];
    }
    ans = *max_element(temp.begin(), temp.end());
    cout << ans << endl;
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