/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=1;i<n;i++)
#define yesi cout<<"YES"<<'\n'
#define nosi cout<<"NO"<<'\n'

int n,m;
const int MAX_MEMBERS = 150123;
vector<int> edges[MAX_MEMBERS];
bool vis[MAX_MEMBERS];

void dfs(int a, int &num_vertices, int &num_edges) {
    vis[a] = true;
    ++num_vertices;
    num_edges += edges[a].size();
    for (int b : edges[a]) {
        if (!vis[b]) {
            dfs(b, num_vertices, num_edges);
        }
    }
}

int main() {
    fastio;
    cin>>n>>m;
    while (m--) {
        int a, b;
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    fori (i,n) {
        if (!vis[i]) {
            int num_vertices = 0, num_edges = 0;
            dfs(i, num_vertices, num_edges);
            if (num_edges != static_cast<long long>(num_vertices) * (num_vertices - 1)) {
                nosi;
                return 0;
            }
        }
    }
    yesi;
    return 0;
}
