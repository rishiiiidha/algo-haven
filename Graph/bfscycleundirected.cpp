#include <iostream>
#include <vector>
#include <queue>
using namespace std;


bool bfscycle(vector<int> edges[], int vertex, int source,vector<int>&parent) {
    vector<bool> visited(vertex, false);
    queue<int> q;
    q.push(source);
    visited[source] = true; 

    while (!q.empty()) {
        int k = q.front();
        q.pop();
     

        for (int i : edges[k]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
                parent[i]=k;
            }
            else{
                if(parent[k]!=i) return 1;
            }
        }
    }
    return 0;
}

int main() {
    int vertex = 6; 
    vector<int> edges[6]; 
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
    vector<int>parent(vertex,-1);
    for(int i=0;i<vertex;i++){
        if(parent[i]==-1){
        if(bfscycle(edges, vertex, i,parent)==1) {cout<<"cycle detected"; break;}
        }
    }
    cout << endl;

    return 0;
}