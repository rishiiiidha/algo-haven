#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

void dfsWithStack(vector<int> edges[], int vertex, int source) {
    vector<bool> visited(vertex, false);
    stack<int> st;
    st.push(source);

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            cout << node << " ";
            visited[node] = true;

            vector<int> neighbors = edges[node];
            reverse(neighbors.begin(), neighbors.end());

            for (int neighbor : neighbors) {
                if (!visited[neighbor]) {
                    st.push(neighbor);
                }
            }
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

    cout << "DFS (using stack) starting from node 0: ";
    dfsWithStack(edges, vertex, 0);

    return 0;
}