#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

bool check_pile(ll x, ll y){
    ll a = ll (2*x-y);
    ll b = ll (2*y-x);
    if(a%3==0 && a>=0 && b%3==0 && b>=0) return 1;
    else return 0;
}


int main(){
    ll t;

    cin>>t;

    ll a, b;

    for(ll i = 0; i<t; i++){
        cin>>a>>b;
        if(check_pile(a, b)) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
