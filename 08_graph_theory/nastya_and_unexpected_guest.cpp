/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define fori(i,n) for(int i=0;i<n;i++)

int n,m,r,g;
int dist[10010];
int dp[10010][1010];

int main(){
    fastio;
    cin>>n>>m;
    fori(i,m){
        cin>>dist[i];
    }
    cin>>g>>r;
    sort(dist, dist+m);
    deque<pair<int,int> > q;
    q.push_back(make_pair(0,0));
    dp[0][0] = 1;
    int ans = 0x7fffffff;
    while(!q.empty()){
        pair<int,int> temp = q.front();
        int idx = temp.first;
        int val = temp.second;
        q.pop_front();
        for(int i=-1;i<=1;i+=2){
            int new_idx = idx+i;
            if(new_idx<0 || new_idx>=m)
                continue;
            else if(new_idx == m-1){
                int d = abs(dist[idx]-dist[new_idx]);
                if(val + d <= g){
                    ans = min(ans, (dp[idx][val]-1)*(g+r)+val+d);
                }
            }
            else{
                int d = abs(dist[idx]-dist[new_idx]);
                if(val + d == g && dp[new_idx][0] == 0){
                    dp[new_idx][0] = dp[idx][val] + 1;
                    q.push_back(make_pair(new_idx, 0));
                }
                else if(val + d < g && dp[new_idx][val+d] == 0){
                    dp[new_idx][val+d] = dp[idx][val];
                    q.push_front(make_pair(new_idx, val+d));
                }
            }
        }
    }
    cout<<((ans == 0x7fffffff)? -1: ans);
}
