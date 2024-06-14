#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n) {
       int m=n;
       int a = n%10;
       n=n/10;
       int b=n%10;
       n=n/10;
       int c=n%10;
       if(a*a*a+b*b*b+c*c*c==m) return "true";
       else return "false";
    }
};