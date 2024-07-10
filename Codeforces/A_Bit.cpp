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
void solve(){
    int n;
    cin >> n;
    int x = 0;
    while (n--)
    {
        string s;
    cin >> s;
    if(s=="X++"){
        x++;
    }
    else if(s=="X--"){
        x--;
    }
    else if(s=="++X"){
        ++x;
    }
    else if(s=="--X"){
        --x;
    }
    }
    cout << x;
}
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}