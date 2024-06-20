#include<bits/stdc++.h>

using namespace std;
#define all(x)(x).begin(), (x).end()
#define endl '\n'
#define int long long
// Read and try to understand every single test case
// Divide test cases into cases. Almost every test case is there for a reason.
// Taking more time than expected? Open paper and start writing
// Still can't find a pattern? Write a bruteforce and look for a pattern there.

void solve() {
    int x, y;
    cin >> x >> y;
    if (x > y) {
        if(x-y==1){
            if(x&1){
 cout << "CHEFINA" << endl;
            }
            else{
 cout << "CHEF" << endl;
            }
        }
        else{
            cout << "CHEF" << endl;
        }
    }
    else if (x < y){
        if(y-x==1){
            if(y&1){
cout << "CHEFINA" << endl;
            }
            else{
cout << "CHEF" << endl;
            }
        }
        else{
            cout << "CHEFINA" << endl;
        }
    } 
    else {
        if (x & 1) {
            cout << "CHEF" << endl;

        }
        else cout << "CHEFINA" << endl;
    }

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}