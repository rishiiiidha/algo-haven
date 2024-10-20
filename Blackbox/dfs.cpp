#include<bits/stdc++.h>
using namespace std;

map<int,pair<int,int> >mp;
int t = 0;
void dfs(int node, vector<int> adj[], int parent)
{
    // when the node is entering
    mp[node].first = t;
    t++;
    cout << node << " ";
    for(auto child : adj[node]){
        if(child==parent)
            continue;
        dfs(child, adj, node);
    }
    mp[node].second = t;
    t++;
    // when the node is leaving
}
int main(){
    int n;
    cin >> n;
    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1;i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, adj, -1);
    cout << endl;
    // entering and leaving time
    for(auto i:mp){
        cout << i.first << " -> { " << i.second.first <<","<< i.second.second <<"}" << endl;
    }
}