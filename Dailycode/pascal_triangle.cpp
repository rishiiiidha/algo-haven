#include<bits/stdc++.h>
using namespace std;

// variation : 1 
// given r,c find ncr
void variation1(int r,int c){
 
 // n*(n-1)*(n-2).... (n-r+1)/(r*(r-1)*(r-2))
 int res = 1;
 for (int i = 0; i < c; i++)
 {
     res = res * (r - i);
     res = res / (i + 1);
 }
 cout << res << endl;
}
int main(){
    // int n;
    // cin >> n;
    int r, c;
    cin >> r >> c;
    variation1(r,c);
}