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
bool checkGreaterThan2Sequence(string s){
    int cnt = 0;
    int maxi = INT_MIN;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
            cnt++;
        else {
            maxi = max(maxi, cnt);
            cnt = 0;
        }
    }
      maxi = max(maxi, cnt);
      cnt = 0;
      if(maxi>2)
          return true;
    else
        return false;
}
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    bool ifExists = checkGreaterThan2Sequence(s);
    if(ifExists){
        cnt = 2;
        cout << cnt << endl;
    }
    else{
        for (int i = 0; i < n;i++){
            if(s[i]=='.')
                cnt++;
        }
        cout << cnt << endl;
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