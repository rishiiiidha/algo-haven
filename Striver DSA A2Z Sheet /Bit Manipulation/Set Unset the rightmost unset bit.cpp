#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int setBit(int n) {
        for(int i=0;i<=31;i++){
            if((n&(1<<i))==0) {
                return (n|(1<<i));
            }
        }
        return -1;
    }
};