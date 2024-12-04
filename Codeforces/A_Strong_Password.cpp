#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    if(n==1){
        s.insert(s.begin(), 'a' + (s[0]-'a' + 1) % 26);
    }
   else{
     for (int i = 1; i < n;i++){
        if(s[i]==s[i-1]){
            s.insert(s.begin() + i,'a' + (s[0]-'a' + 1) % 26);
            break;
        }
    }
   }
    cout << s << endl;
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