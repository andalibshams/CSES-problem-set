#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<ll> v;

    for(int i=0; i<n; i++){
        ll vi;
        cin>>vi;
        v.push_back(vi);
    }

    multiset<ll> s;
    multiset<ll>::iterator it;

    s.insert(v[0]);

    for(int i=1; i<n; i++){
        it = s.lower_bound(v[i]+1);
        if(it!=s.end())    s.erase(it);
        s.insert(v[i]);
    }


    cout<<s.size();


    return 0;
}
