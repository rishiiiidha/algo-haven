#include <iostream>
#include <vector>
using namespace std;
bool dfscycle(vector<int>edges[],int source,int parent,vector<bool>&visited){
    visited[source]=true;
    for(int i:edges[source]){
        if(!visited[i]){
            return dfscycle(edges,i,source,visited);
        }
        else{
             if(parent!=i) return 1;
        }
    }
    return 0;
}
int main() {
    int vertex = 4;
    vector<int> edges[4];

    edges[0].push_back(1);
    edges[0].push_back(2);

    edges[1].push_back(0);
    edges[1].push_back(2);

    edges[2].push_back(0);
    edges[2].push_back(1);
    edges[2].push_back(3);

    edges[3].push_back(2); 

    // edges[0].push_back(1);
    // edges[1].push_back(0);

    // edges[0].push_back(2);
    // edges[2].push_back(0);

    // edges[2].push_back(3);
    // edges[3].push_back(2);
    vector<bool>visited(vertex,false);

    cout<<dfscycle(edges,0,-1,visited);

  
    return 0;
}