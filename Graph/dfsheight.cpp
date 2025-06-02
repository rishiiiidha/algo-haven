#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int dfstraversal(vector<int> edges[], int vertex, int source,vector<bool>&visited) {
    // cout << source << " ";
    visited[source]=true;
    int height = 0;
    for(int i : edges[source]){
        if(!visited[i]){
            int x = dfstraversal(edges,vertex,i,visited);
            height=max(height,x+1);
        }
    }
    return height;
}

int main() {
    int vertex = 6; 
    vector<int> edges[6]; 
    edges[0].push_back(1);
    edges[0].push_back(2);
    
    edges[1].push_back(0);
    edges[1].push_back(3);
    
    edges[2].push_back(0);
    edges[2].push_back(4);
    
    edges[3].push_back(1);
    edges[3].push_back(5);
    
    edges[4].push_back(2);
    
    edges[5].push_back(3);

    cout << "DFS height: ";
    vector<bool>visited(vertex,false);
    
    cout << dfstraversal(edges,vertex,0,visited)+1;
    

    return 0;
}