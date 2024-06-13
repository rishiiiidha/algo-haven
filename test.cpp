#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
void solve(){
   
    string s = "abcdefg";
    string t = "abbcc";
    // frequency table of t;

    int table[26];
    memset(table, 0, sizeof(table));
    for (auto i : t)
    {
        table[i - 'a' + 1]++;
    }

    for(auto i:table)
    {  
        if(i!=0) 
        cout << i << endl;
    }
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