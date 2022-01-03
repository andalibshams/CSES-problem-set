#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n, m;
    cin>>n>>m;
 
    vector<vector<int>> v(n);
 
    while(m--){
        int a, b;
        cin>>a>>b;
        a--; b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }
 
    vector<int> ass(n, 0);
 
 
    for(int i=0; i<n; i++){
        if(!ass[i]){
            queue<int> q;
            q.push(i);
            ass[i] = 1;
            while(!q.empty()){
                int p = q.front(); q.pop();
                int z = (ass[p])%2+1;
                for(int u:v[p]){
                    if(!ass[u]){
                        q.push(u);
                        ass[u] = z;
                    }
                    else if(ass[u]!=z){
                        cout<<"IMPOSSIBLE";
                        return 0;
                    }
                }
            }
        }
    }
 
 
 
    for(int i=0; i<n; i++) cout<<ass[i]<<" ";
 
    return 0;
}