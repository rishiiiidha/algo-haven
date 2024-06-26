#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
// Read and try to understand every single test case
// Divide test cases into cases. Almost every test case is there for a reason.
// Taking more time than expected? Open paper and start writing
// Still can't find a pattern? Write a bruteforce and look for a pattern there.

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(all(v));
    for (int i = 0; i < n;i++){
        int diff = i + 1 - v[i];
        if(diff<0) {
            cout << "NO" << endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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