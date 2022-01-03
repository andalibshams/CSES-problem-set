#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n, x;

    cin>>n>>x;

    vector<int> c, v;

    for(int i=0; i<n; i++) {
        int ci;
        cin>>ci;
        c.push_back(ci);
    }

    v.push_back(0);

    for(int i=1; i<=x; i++){
        v.push_back(x+1);
        for(auto c_i: c){
            if(i-c_i>=0)    v[i] = min(v[i], v[i-c_i]+1);
        }
    }

    if(v[x]==x+1) v[x] = -1;
    cout<<v[x];

    return 0;
}
