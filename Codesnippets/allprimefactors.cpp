#include<bits/stdc++.h>
using namespace std;
vector<int>primefactors;
void allprimefactors(int n){
   while(n%2==0){
     primefactors.push_back(2);
     n=n/2;
   }
   while(n%3==0){
     primefactors.push_back(2);
     n=n/3;
   }
   for(int i=5;i*i<=n;i=i+6){
     while(n%i==0){
         primefactors.push_back(i);
         n=n/i;
     }
      while(n%(i+2)==0){
         primefactors.push_back(i+2);
         n=n/(i+2);
     }
   }
   if(n>3) primefactors.push_back(n);
}