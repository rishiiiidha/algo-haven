#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
vector<int> get_best(vector<int>&a){
    int mx1 = -1, mx2 = -1, mx3 = -1;
    int maxi1 = INT_MIN, maxi2 = INT_MIN, maxi3 = INT_MIN;
    int n = a.size();
    for (int i = 0; i < n;i++){
        if(i!=mx1 && a[i]>maxi1){
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
            maxi1 = a[i];
            if(mx2!=-1)
                maxi2 = a[mx2];
            if(mx3!=-1)
                maxi3 = a[mx3];
        }
        else if(i!=mx2 && a[i]>maxi2){
            mx3 = mx2;
            mx2 = i;
            maxi2 = a[i];
            if(mx2!=-1)
                maxi2 = a[mx2];
            if(mx3!=-1)
                maxi3 = a[mx3];
        }
        else if(i!=mx3 && a[i]>maxi3){
            mx3 = i;
            maxi3 = a[i];
             if(mx3!=-1)
                maxi3 = a[mx3];
        }
    }
    return {mx1, mx2, mx3};
}
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    for (int i = 0; i < n;i++){
        cin >> b[i];
    }
    for (int i = 0; i < n;i++){
        cin >> c[i];
    }
    int ans = INT_MIN;
    for (auto i : get_best(a))
    {
        for(auto j: get_best(b) ){
            for(auto k:get_best(c)){
               if(i!=j && i!=k && j!=k)   ans = max(ans, a[i] + b[j] + c[k]);
            }
        }
    }
    cout << ans << endl;
}
signed main()
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