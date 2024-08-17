#include<bits/stdc++.h>
using namespace std;
vector<int>primes(1e7);
void seive(){
    iota(primes.begin(), primes.end(), 0);
    primes[0] = primes[1] = -1;
    for (int i = 2; i * i <= 1e7; i++) {
    if(primes[i] == i) {
        for (int j = i * i; j <= 1e7; j += i) {
            primes[j] = -1;
            }
        }
    }
}
