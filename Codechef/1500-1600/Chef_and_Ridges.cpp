#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
// Win or lose, keep striving for the next high. 
// Read and try to understand every single test case
// Divide test cases into cases. Almost every test case is there for a reason.
// Taking more time than expected? Open paper and start writing
// Still can't find a pattern? Write a bruteforce and look for a pattern there.

void solve(){
    int n;
    cin >> n;
    if(n==1){
        cout << 1 << " " << 2 << " ";
        return;
    }
    int x = 0;
    int y = 1 << n;
    int i = 0;
    while (n--)
    {
      if(i&1){
          x = (x - 1) * 2 + 1;
      }
      else
      {
          x = 2 * (x) + 1;
      }
      i++;
    }
    int k = __gcd(x, y);
    if (k== 1)
        cout << x << " " << y << " ";
    else{
        cout << x/k << " " << y/k << " ";
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