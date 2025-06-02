#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int bfstraversal(vector<int> edges[], int vertex, int source) {
    vector<bool> visited(vertex, false);
    queue<int> q;
    q.push(source);
    visited[source] = true; 
   int ans = 0;
    while (!q.empty()) {
       
        int height = q.size();
       for(int i=0;i<height;i++){
          int k = q.front();
          q.pop();
        // cout << k << " ";

        for (int i : edges[k]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
        
       }
       ans++;
    }
    return ans;
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
    cout << "BFS height ";
    cout<< bfstraversal(edges, vertex, 0);
    cout << endl;

    return 0;
}