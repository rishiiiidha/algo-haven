#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
#define loop(i,a,b) for(int i=int(a);i<int(b);i++)
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
vector<int> primes(1e7);
int lcm(int a, int b)
{
    int k = a*b;
    return k / (__gcd(a, b));
}
bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.second > p2.second;
}
void seive(){
    iota(primes.begin(), primes.end(), 0);
    primes[0] = primes[1] = -1;
    for (int i = 2; i * i <= MOD; i++) {
    if(primes[i] == i) {
        for (int j = i * i; j <= MOD; j += i) {
            primes[j] = -1;
            }
        }
    }
}
//use if number is above 1e7
bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int n = 3;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(all(v));
    int cnt = 0;
    while (cnt < 5)
    {
      if(v[0]<=v[1]){
          v[0]++;
          cnt++;
      }
      sort(all(v));
    }
    int ans = v[0] * v[1] * v[2];
    cout << ans << endl;
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