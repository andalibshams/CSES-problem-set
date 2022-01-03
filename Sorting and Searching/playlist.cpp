#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n, s = 1;
    cin>>n;

    vector<ll> v;
    set<ll> k;

    for(int i=0; i<n; i++){
        ll vi;
        cin>> vi;
        v.push_back(vi);
    }

    int j = 0, i=0;
    while(j<n){
        if(k.count(v[j])){
            s = max(s, j-i);
            while(v[i]!=v[j])   k.erase(v[i++]);
            i++;
        } else k.insert(v[j]);
        j++;
    }
    s = max(s, j-i);
    cout<<s;

    return 0;
}
