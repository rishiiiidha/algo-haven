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
bool check(unordered_map<int,int>&mp,int minVolume , int halfDistance){
    int totalCapacity = minVolume;
    minVolume--;
    for (int i = 1; i < halfDistance; i++)
    {
        if(minVolume<0)
            return false;
        if (mp.find(i) != mp.end())
        {
            minVolume = totalCapacity;
        }
        minVolume--;
    }
    for (int i = halfDistance; i >=0; i--)
    {
        if(minVolume<0)
            return false;
        if (mp.find(i) != mp.end())
        {
            minVolume = totalCapacity;
        }
        minVolume--;
    }
    return true;
}
void solve(){
    int n, x;
    cin >> n >> x;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++){
    //     cin >> v[i];
    // }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        mp[k]++;
    }
    for (int i = 0; i <= (2 * x); i++)
    {
      if(check(mp,i,x)){
          cout << i << endl;
          return;
      }
      //    the minimum possible volume of the gas tank;
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