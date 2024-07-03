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
    vector<int>nums(n);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        mp[nums[i]]++;
    }
    int maxi = INT_MIN;
    int cost = n*1;
    for (auto i : mp)
    {
        cost = min(cost, (n * i.first - i.second * i.first));
    }

    
    cout << cost<<endl;
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