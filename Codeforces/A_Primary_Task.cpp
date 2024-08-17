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
    string s;
    cin >> s;
    int n = s.size();
    if(n==3){
        int a = s[0] - '0';
        int b = s[1] - '0';
        int c = s[2] - '0';
        if(a == 1 && b == 0 && c >=2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if(n==4){
        int a = s[0] - '0';
        int b = s[1] - '0';
        int c = s[2] - '0';
        int d = s[3] - '0';
        int x = c * 10 + d;
        if (a == 1 && b == 0 && x>=10)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else{
        cout << "NO" << endl;
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