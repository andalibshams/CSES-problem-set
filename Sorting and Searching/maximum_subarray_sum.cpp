#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int n;
    cin>>n;

    vector <ll> x;

    ll sum_ = 0,  maxm = -2000000000;

    for(int i=0; i<n; i++){
        ll xi;
        cin>>xi;
        x.push_back(xi);
    }



    for(int i=0; i<n; i++){
        sum_ = max(sum_+x[i], x[i]);
        maxm = max(sum_, maxm);
    }

    cout<<maxm;

    return 0;
}
