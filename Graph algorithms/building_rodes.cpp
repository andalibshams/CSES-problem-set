#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &v, vector<int> &visit, int s){
    visit[s] = 1;
    for(int u:v[s]){
        if(!visit[u])    dfs(v, visit, u);
    }
}


int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> v(n);
    vector<int> visit(n);
    vector<int> nodes;

    while(m--){
        int a, b;
        cin>>a>>b;
        a--; b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(v, visit, 0);
  //  for(int vi:visit) cout<<vi<<" ";
    for(int i=1; i<n; i++){
        if(visit[i]) continue;
        nodes.push_back(i);
        dfs(v, visit, i);
    }

    cout<<nodes.size()<<"\n";
    for(int x: nodes){
        cout<<1<<" "<<x+1<<"\n";
    }

    return 0;
}
