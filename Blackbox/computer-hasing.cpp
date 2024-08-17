#include<bits/stdc++.h>
using namespace std;
#define int long long

int compute_hasing(string const& s){
    int n = s.size();
    int hash = 0;
    int p = 31;
    int power = 1;
    int mod = 1e9 + 9;
    for (int i = 0; i < n; i++)
    {
        hash = (hash + (s[i] - 'a' + 1) * power)%mod;
        power = (power * p)%mod;
    }
    return hash;
}

int32_t main(){
    string s;
    cin >> s;
    cout << compute_hasing(s) << endl;
    return 0;
}