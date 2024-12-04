#include<bits/stdc++.h>
using namespace std;

int getMaxEqualIndices(vector<int> inv1, vector<int> inv2) {
   int n = inv1.size();
   vector<int> diff;
    int count = 0;
   for (int i = 0; i < n; i++) {
      int d = inv2[i] - inv1[i];
      if(d==0){
          count++;
      }
      else
        {  diff.push_back(d);}
   }
   sort(diff.begin(), diff.end());
   int sz = diff.size();
   int i = 0, j = sz - 1;
   while (i < j)
   {
       if (diff[i] + diff[j] == 0) {
           count += 2;
           i++;
           j--;
       } else if (diff[i] < 0 && diff[j] > 0 && diff[i] + diff[j] < 0) {
           diff[i] = diff[i] + diff[j];
           count++;
           j--;
       } else if (diff[i] < 0 && diff[j] > 0 && diff[i] + diff[j] > 0) {
           diff[j] = diff[i] + diff[j];
           count++;
           i++;
       } else {
           i++;
           j--;
       }
   }
   return count;
}

int main() {
   int n;
   cin >> n;
   vector<int> inv1(n), inv2(n);
   for (int i = 0; i < n; ++i) {
       cin >> inv1[i];
   }
   for (int i = 0; i < n; ++i) {
       cin >> inv2[i];
   }

   cout << getMaxEqualIndices(inv1, inv2) << endl;
   return 0;
}