#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> moves = {{1,0},{-1,0},{0,1},{0,-1}};
vector<vector<int>> v;
int n, m;

bool isValid(int x, int y){
    if(x<0 || y<0 || x>=n || y>=m) return false;
    if(v[x][y]) return false;
    return true;
}

void dfs(int i, int j){
    v[i][j] = true;
    for(auto m: moves){
        if(isValid(i+m.first, j+m.second)){
            dfs(i+m.first, j+m.second);
        }
    }
}

int main(){

    cin>>n>>m;

    char ch;

    for(int i=0; i<n; i++){
        vector<int> vrow, visitedRow(m, 0);
        for (int j=0; j<m; j++){
            cin>>ch;
            if(ch=='#') vrow.push_back(1);
            else vrow.push_back(0);
        }
        v.push_back(vrow);
    }

    int n_room = 0;

    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if(!v[i][j]){
                dfs(i, j);
                n_room++;
            }
        }
    }

    cout<<n_room;

    return 0;
}
