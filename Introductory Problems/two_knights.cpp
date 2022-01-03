#include <bits/stdc++.h>

typedef long long ll;

using namespace std;


int main(){
    ll m;
    cin>>m;
    for (ll i=1; i<=m; i++){
        ll n_ways = i*i*(i*i-1)/2 - 4*(i-1)*(i-2);
        cout<<n_ways<<endl;

    }
    return 0;
}
