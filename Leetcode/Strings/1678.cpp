#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string ans;
        for (int i = 0; i < n; i++) {
            if (command.substr(i, 1) == "G") {
                ans += 'G';
            } else if (command.substr(i, 2) == "()") {
                ans += 'o';
                i = i + 1;
            } else if (command.substr(i, 4) == "(al)") {
                ans += "al";
                i = i + 3;
            }
        }
        return ans;
    }
};