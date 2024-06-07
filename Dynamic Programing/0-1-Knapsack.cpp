// Recursive approach 

// IP : wt[] : weight array 
    //  pt[] : profit array
    //  W    : maximum capacity

// base condition : think of possible valid solution : 
// an empty array wt[] ={ } pt[]={ }
// and W : 0 capacity of knapsack and 
// its output maximum profit would be 0 

#include<bits/stdc++.h>
using namespace std;
// Recursive code
// int knapsack(int wt[],int pt[],int W ,int size){
//     if(size==0 || W==0)
//         return 0;
//     if(wt[size-1]<=W) {
//         return max(pt[size - 1] + knapsack(wt, pt, W - wt[size - 1], size - 1), knapsack(wt, pt, W, size - 1));
//     }
//     else{
//         return knapsack(wt, pt, W, size - 1);
//     }
// }
void solve(){
    int wt[] = {1, 3, 4, 5};
    int pt[] = {1, 4, 5, 7};
    int W = 7;
    int size = 4;
    
    // cout << knapsack(wt, pt, W, size)<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}