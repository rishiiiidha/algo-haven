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
    int i = 0;
    bool direction = false;
    while (abs(i) != n)
    {
        if(!direction){

            i = abs(i) + (2 * i - 1);
            direction = true;
        }
        else{
            i = i + abs(2 * i - 1);
            i = i * (-1);
            direction = false;
        }
    }
    if(direction==false)
        cout << "Sakurako" << endl;
    else
        cout << "Kosuke" << endl;
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