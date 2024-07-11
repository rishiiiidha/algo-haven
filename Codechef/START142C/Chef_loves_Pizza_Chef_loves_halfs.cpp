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
    int m = n;
    n = n / 2;
    int idx = -1;
    for (int i = 1; i <= 17; i++)
    {
        if(pow(2,i)>n)
            {idx = i - 1;
                break;
            }
    }
    int q =  pow(2, idx);
    int k = n / q;
    int r = n % q;
    int res = (k * q * 2) - (r * 2);

    res = m - res;
    cout << res << endl;
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