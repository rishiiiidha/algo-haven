#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define endl '\n'
#define int long long
#define loop(i,a,b) for(int i=int(a);i<int(b);i++)
const int MOD = 1e9+7;
const int INF = LONG_MAX >> 1;
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = 'L' + s;
    s = s + 'L';
    n += 2;
    for (int i = 0; i < n;)
    {
        if(s[i]=='L'){
           if(i+m<n){
                 bool flag = false;
                 int idx = -1;
                 int j = i + 1;
                 for (j = i + 1; j <= i + m; j++)
                 {
                     if (s[j] == 'L')
                        {
                            flag = true;
                            i = j;
                        }
                    if(s[j]=='W')
                        idx = j; 
                 }
                 if(!flag){
                     if(idx!=-1)
                         i = idx;
                     else{
                        cout<<"NO"<<endl;
                        return;
                     }
                 }
                
           }
           else
           {
               cout << "YES" << endl;
               return;
           }
        }else if(s[i]=='W'){
          if(k<=0){
             cout<<"NO"<<endl;
            return;
          }
          else{
              k--;
              i++;
          }
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES" << endl;
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