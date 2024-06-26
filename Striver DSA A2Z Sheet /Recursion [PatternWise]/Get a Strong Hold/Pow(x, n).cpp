#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double power(double x,int n){
        if(n==0) return 1.00000;
        double value = power(x,n/2);
        if(n%2==0) return (1.0*value*value);
        else return (1.0*x*value*value);
    }
    double myPow(double x, int n) {
        if(n<0) return power(1/x,abs(n));
        return power(x,n);
    }
};