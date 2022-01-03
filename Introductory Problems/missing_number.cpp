#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll x, n, sum, x_sum = 0;

    cin>>n;

    sum = n*(n+1)/2;

    for (ll i=0; i<n-1; i++){
       cin>>x;
       x_sum += x;
    }

    cout<<sum-x_sum;


    return 0;
}
