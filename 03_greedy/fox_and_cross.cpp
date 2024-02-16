/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0)
#define yesi cout<<"YES"<<'\n'
#define nosi cout<<"NO"<<'\n'
#define ll long long

int main()
{
    ll n;
    cin>>n;
    char ch[102][102];
    int cnt=0,cnt2=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>ch[i][j];
            if(ch[i][j]=='#')cnt++;
        }
    }
    for(int i=1;i<n-1; i++){
        for(int j=1; j<n-1; j++){
            if(ch[i][j]=='#' && ch[i-1][j]=='#' && ch[i][j-1]=='#' && ch[i][j+1]=='#' && ch[i+1][j]=='#'){
                  cnt2++;
            }
        }
    }
    if(cnt2*5>=cnt && cnt%5==0){
      yesi;
    }
    else {
      nosi;
    }
    return 0;
}
