#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll n, x, x_prev, turn_sum = 0;

    cin>>n>>x;

    x_prev = x;

    for (ll i =1; i<n; i++){
        cin>>x;
        if(x_prev>x) turn_sum += x_prev - x;
        else x_prev = x;
    }

    cout<<turn_sum;

    return 0;
}
