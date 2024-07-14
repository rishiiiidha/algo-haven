#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){
    int k = a*b;
    return k / (gcd(a, b));
}
int gcd(int a,int b){
    if(b==0) return a;
        return gcd(b,a%b);
}
int main(){
    cout<<gcd(1,2);
}


