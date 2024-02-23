/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)
using namespace std;

vector<vector<int>> adj_list;
set<int> visited;
vector<int> path;

bool dfs(int node, int target) {
    visited.insert(node);
    path.push_back(node);
    if (node == target) {
        return true;
    }
    vector<int> neighbors = adj_list[node];
    sort(neighbors.begin(), neighbors.end());
    for (int neighbor : neighbors) {
        if (visited.find(neighbor) == visited.end()) {
            if (dfs(neighbor, target)) {
                return true;
            }
        }
    }
    path.pop_back();
    return false;
}

int main() {
    fastio;
    int n, m;
    cin>>n>>m;
    adj_list.resize(n + 1);
    fori (i,m) {
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int u, v;
    cin>>u>>v;
    if (dfs(u, v)) {
        for (int vrt : path) {
            cout<<vrt<<" ";
        }
    } else {
        cout << "no solution";
    }
    return 0;
}
