#include<bits/stdc++.h>
using namespace std;

int getMaxMatches(vector<int>& inv1, vector<int>& inv2) {
  int n=inv1.size(), matches=0;
  vector<int> posdiffs, negdiffs;
  for (int i=0; i<n; ++i) {
    int diff = inv1[i] - inv2[i];
    if (diff == 0) {
      matches++;
    } else if (diff > 0) {
      posdiffs.push_back(diff);
    } else if (diff < 0) {
      negdiffs.push_back(diff);
    }
  }
  sort(posdiffs.begin(), posdiffs.end());
  sort(negdiffs.begin(), negdiffs.end(), greater<int>());
  int s1=posdiffs.size(), s2=negdiffs.size(), i=0, j=0;
  while (i<s1 && j<s2) {
    if (posdiffs[i] == -negdiffs[j]) {
      matches += 2;
      i++;
      j++;
    } else if (posdiffs[i] > -negdiffs[j]) {
      posdiffs[i] += negdiffs[j++];
      matches++;
    } else{
      negdiffs[j] += posdiffs[i++];
      matches++;
    }
  }
  return matches;
}

int main() {
    vector<int> inv1;
    inv1.push_back(2);
    inv1.push_back(3);
    inv1.push_back(2);
    inv1.push_back(2);
    inv1.push_back(2);
    inv1.push_back(2);

    vector<int> inv2;
    inv2.push_back(3);
    inv2.push_back(1);
     inv2.push_back(3);
    inv2.push_back(1);
     inv2.push_back(3);
    inv2.push_back(1);
    cout << getMaxMatches(inv1, inv2) << "\n"; // ans=2
}
