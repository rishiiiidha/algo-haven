#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
int lcm(int a,int b){
    int k = a*b;
    return k / (__gcd(a, b));
}
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second > p2.second;
}
//vector<int>temp[n] it is vector named temp consists n elements where as every element is a vector<int> i.e vector<int>temp[n] = vector<vector<int>>temp(n)
void solve(){
    int x, y;
    cin >> x >> y;
    unordered_map<int, int> mp;
    mp[x]++;
    mp[x + 1]++;
    mp[x + 2]++;
    if(mp.find(y)!=mp.end() || mp.find(y+1)!=mp.end()) cout<<"YES"<<endl;
    else
        cout << "NO" << endl;
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