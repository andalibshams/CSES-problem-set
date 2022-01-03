#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n;
    ll m = pow(10,9)+7;
    cin>>n;

    vector<vector<ll>> p;

    for (int i=0; i<=n;i++){
        vector<ll> pRow;
        for(int j=0; j<=n; j++){
            if(i==0 or j==0) pRow.push_back(-1);
            else{
                char c;
                cin>>c;
                if(c=='*')  pRow.push_back(-1);
                else  pRow.push_back(0);
            }
        }
        p.push_back(pRow);
    }

    if(p[1][1]==-1 || p[n][n]==-1) {cout<<0; return 0;}


    p[1][1] = 1;

    for(int i=1; i<=n; i++){
        int p_down = i-1;
        for(int j=1; j<=n; j++){
            if(p[i][j]<0) continue;
            int p_left = j-1;
            if(p[p_down][j]>=0) p[i][j] = p[p_down][j];
            if(p[i][p_left]>=0)  p[i][j] +=  p[i][p_left];
            p[i][j] %= m;
            //cout<<i<<" "<<j<<" "<<p[i][j]<<"\n";
        }
    }

    /*for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++) cout<<p[i][j]<<" ";
        cout<<"\n";
    }*/

    cout<<p[n][n];

    return 0;
}
