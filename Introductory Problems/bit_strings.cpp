#include <bits/stdc++.h>

typedef long long ll;

ll bigMod(ll a, int b, ll M){
    if(b==0) return 1;
    ll x = bigMod(a, b/2, M);
    x = x*x %M;
    if(b%2) x = (x*a)%M;
    return x;

}

using namespace std;

int main(){

    int n;
    cin>>n;

    ll m = pow(10,9)+7;

    cout<<bigMod(2, n, m);


    return 0;
}
