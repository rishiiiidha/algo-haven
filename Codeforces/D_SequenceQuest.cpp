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
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    deque<int> ans;
    int mini = INT_MAX;
    mini = v[0];
    ans.push_back(mini);
    for (int i = 1; i < n; i++)
    {
        if (v[i] > mini)
        {
            ans.push_back(v[i]);
        }
        else{
            ans.push_front(v[i]);
            mini = v[i];
        }
    }
    for(auto i:ans)
        cout << i << " ";
    cout << endl;
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