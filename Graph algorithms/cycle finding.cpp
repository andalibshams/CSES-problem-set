#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
ll inf = pow(10, 9);
 
int main(){
    int n, m, a, b;
    ll c;
    cin>>n>>m;
    vector<tuple<int, int, ll>> v;
    vector<ll> dist(n, inf);
    vector<int> path(n);
    dist[0] = 0;
 
    for(int j=0; j<m; j++){
        cin>>a>>b>>c;
        a--; b--;
        v.push_back({a, b, c});
    }
 
    int x;
 
    for(int i=0; i<n; i++){
        x = -1;
        for(int j=0; j<m; j++){
            tie(a, b, c) = v[j];
            if(dist[b]>dist[a]+c){
                dist[b] = dist[a]+c;
                path[b] = a;
                x = b;
            }
        }
    }
 
    if(x==-1) cout<<"NO";
    else{
        for (int i = 0; i < n; i++) x = path[x];
        int o = x;
        vector<int> a(1, o);
        do {
            x = path[x];
            a.push_back(x);
        } while (x != o);
 
        reverse(a.begin(), a.end());
        cout << "YES\n";
        for (int i = 0; i < a.size(); i++) cout << a[i] + 1<<" ";
 
    }
 
    return 0;
}