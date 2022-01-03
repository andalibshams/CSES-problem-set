#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m, a, b, w;
    cin>>n>>m;

    vector<pair<int, int>> adj[n];
    vector<int> distance(n, pow(10,9));

    distance[0] = 0;

    while(m--){
        cin>>a>>b>>w;
        a--; b--;
        adj[a].push({b, w});
    }

    priority_queue<pair<int,int>> q;

    q.push({0,0});

    while (!q.empty()) {
        int a = q.top().second;
        q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto u : adj[a]) {
            int b = u.first, w = u.second;
            if (distance[a]+w < distance[b]) {
                distance[b] = distance[a]+w;
                q.push({-distance[b],b});
            }
        }
    }

    return 0;
}
