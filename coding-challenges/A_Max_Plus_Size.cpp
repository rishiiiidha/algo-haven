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
    vector<int>v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
   
    int maxi = *max_element(all(v));

    int index = -1;
    int m = maxi;

    if (n % 2 == 0)
    {
        cout << (n / 2) + maxi << endl;
        }
         else{
              for (int i = 0; i < n;i++){
        if(v[i]==maxi){
            index = i;
            if(index%2==0){
                m = max(m, (n / 2) + maxi + 1);
            }
            else{
                   m = max(m, (n / 2) + maxi );
            }

        }
              }
              cout << m << endl;
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