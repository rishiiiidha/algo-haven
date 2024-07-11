#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e7; 

bool isprime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt=0;
        if(n==1) n++;
        int ans = 1;
        while(cnt<2){
            if(isprime(n)){
                ans=ans*n; 
                cnt++;
            }
            n++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
