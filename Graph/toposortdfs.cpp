#include <iostream>
#include <vector>
using namespace std;

void dfs(vector<int>adj[],int n,int source, vector<bool>&visited,stack<int>&st){
    visited[source]=true;
    for(auto i:adj[source]){
        if(visited[i]==false){
            dfs(adj,n,i,visited,st);
        }
    }
    st.push(source);
}
int main(){
     int vertex = 6; 
    vector<int> edges[6]; 
    edges[4].push_back(5);
    edges[5].push_back(0);
    
    edges[0].push_back(1);
    edges[1].push_back(2);
    
    edges[2].push_back(3);
    cout << "DFS Traversal starting from node 0: "<<endl;
    vector<bool>visited(vertex,false);
    stack<int>st;
   for(int i=0;i<vertex;i++){
     if(!visited[i])dfs(edges,vertex,i,visited,st);
   }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
