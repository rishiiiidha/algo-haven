#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void dfstraversal(vector<int> edges[], int vertex, int source,vector<bool>&visited) {
   

    cout << source << " ";
    visited[source]=true;

    for(int i : edges[source]){
        if(!visited[i]){
            dfstraversal(edges,vertex,i,visited);
        }

    }
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

    cout << "DFS Traversal starting from node 0: ";
    vector<bool>visited(vertex,false);
    dfstraversal(edges,vertex,0,visited);
    

    return 0;
}