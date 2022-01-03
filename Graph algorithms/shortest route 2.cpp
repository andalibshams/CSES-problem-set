#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, a, b, query;
    ll c, inf = pow(10, 18);
    cin>>n>>m>>query;
 
    vector<vector <ll>> adjM(n, vector<ll> (n, 1e18));
 
    while(m--){
        cin>>a>>b>>c;
        a--; b--;
        if(adjM[a][b] > c){
            adjM[a][b] = c;
            adjM[b][a] = c;
        }
    }
 
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if(adjM[i][k]+adjM[k][j]<adjM[i][j]){
                    adjM[i][j]= adjM[j][i] = adjM[i][k]+adjM[k][j];
                }
            }
        }
    }
 
    while(query--){
        int st, en;
        cin>>st>>en;
        st--; en--;
        if(st==en)  adjM[st][en] = 0;
        if(adjM[st][en]==1e18) adjM[st][en] = -1;
        cout<<adjM[st][en]<<"\n";
    }
 
    return 0;
}