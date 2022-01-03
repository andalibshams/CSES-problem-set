#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> v(n);
    vector<int> prev(n);

    while(m--){
        int a, b;
        cin>>a>>b;
        a--; b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    queue<int> q;
    q.push(0);
    prev[0] = -1;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int u: v[p]){
            if(!prev[u]){
                prev[u] = p+1;
                q.push(u);
            }
        }
    }

    if(!prev[n-1]){
        cout<<"IMPOSSIBLE";
        return 0;
    }

    vector<int> tr;
    int st = n;

    while(st>0){
        tr.push_back(st);
        st = prev[st-1];
    }

    cout<<tr.size()<<"\n";

    for(int i =tr.size()-1; i>=0; i--) cout<<tr[i]<<" ";


    return 0;
}
