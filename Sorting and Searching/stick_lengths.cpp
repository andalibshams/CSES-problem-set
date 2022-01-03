#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll n, sum = 0, med = 0;
    cin>>n;

    vector<ll> p;

    for (ll i=0; i<n; i++){
        ll pi;
        cin>>pi;
        //avg += pi;
        p.push_back(pi);
    }

    sort(p.begin(), p.end());
    med = p[n/2];

    for (ll i=0; i<n; i++) sum+= abs(p[i]-med);
    cout<<sum;

    return 0;
}
