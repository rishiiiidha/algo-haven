#include <iostream>
#include <vector>
using namespace std;

void bfs(vector<int>adj[],vector<int>inorder,int n){
    queue<int>q;
    for(int i=0;i<n;i++){
        if(inorder[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int k = q.front();
        cout<<k<<endl;
        q.pop();
        for(auto i:adj[k]){
            inorder[i]--;
            if(inorder[i]==0){
                q.push(i);
            }
        }
    }
}
int main(){
     int vertex = 6; 
    vector<int> edges[6]; 
    edges[4].push_back(5);
    edges[5].push_back(0);
    
    edges[0].push_back(1);
    edges[1].push_back(2);
    
    edges[2].push_back(3);
    cout << "BFS Traversal starting from node 0: "<<endl;
    vector<int>inorder(6,0);
    for(int i=0;i<vertex;i++){
        for(auto k:edges[i]){
            inorder[k]++;
        }
    }
      bfs(edges,inorder,vertex);
}
