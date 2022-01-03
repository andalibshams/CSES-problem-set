#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<vector<int>> ma_p;
    vector<vector<int>> visited(n, vector<int> (m, 0));
    vector<vector<int>> path(n, vector<int> (m, -1));

    int st_i, st_j, en_i=-1, en_j=-1;

    for(int i=0; i<n; i++){
        vector<int> row;
        for(int j=0; j<m; j++){
            char ch;
            cin>>ch;
            if(ch=='A'){
                st_i = i;
                st_j = j;
                row.push_back(0);
            }
            else if(ch=='B'){
                en_i = i;
                en_j = j;
                row.push_back(1);
            }
            else if(ch=='#') row.push_back(0);
            else row.push_back(1);
        }

        ma_p.push_back(row);
    }
    int move_y[] = {-1,1, 0, 0};
    int move_x[] = {0, 0, -1,1};
    char move_ch[] = {'L', 'R', 'U', 'D'};

    int back_y[] = {1,-1, 0, 0};
    int back_x[] = {0, 0, 1,-1};

    queue<pair<int , int>> q;
    q.push({st_i, st_j});

    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int x = p.first + move_x[i];
            int y = p.second + move_y[i];

            if(x>=0 && x<n && y>=0 && y<m && ma_p[x][y] && visited[x][y]==0){
                visited[x][y] = visited[p.first][p.second] + 1;
                path[x][y] = i;
                q.push({x, y});
            }
        }
    }

    if(visited[en_i][en_j]==0) cout<<"NO";
    else{
        cout<<"YES"<<"\n"<<visited[en_i][en_j]<<"\n";
        vector<char> ch(visited[en_i][en_j], move_ch[path[en_i][en_j]]);

        int ly = en_j;
        int lx = en_i;

        for(int i = visited[en_i][en_j]-2; i>=0; i-- ){
            int x = lx+back_x[path[lx][ly]];
            int y = ly+back_y[path[lx][ly]];
            ch[i] = move_ch[path[x][y]];
            ly = y;
            lx = x;
        }

        for(int i=0; i<visited[en_i][en_j]; i++) cout<<ch[i];
    }

    return 0;
}
