#include<bits/stdc++.h>
using namespace std;

const int MOD =1e9+7;
class Solution {
public:
    long long power(long long a , long long b){
        if(b==0) return 1;
        int value = (power(a,b/2));
        if(b%2==0) return ((long long)(value)*(value))%MOD;
        else return (((long long)(value)*(value))%MOD * a%MOD)%MOD;
    }
    int countGoodNumbers(long long n) {
        long long evens = (n+1)/2;
        long long primes = n-evens;
        return ((long long)power(5,evens)%MOD * power(4,primes)%MOD)%MOD;
    }
};