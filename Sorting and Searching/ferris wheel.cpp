#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll n, x, counter = 0;
    cin>>n>>x;

    vector<ll> p;

    for(int i=0; i<n; i++){
        ll a;
        cin>>a;
        p.push_back(a);
    }

    sort(p.begin(), p.end());

    ll i = 0, j= n-1;

    while(i<=j){
        if(p[j]<=x){
            counter++;
            if(p[i]+p[j]<=x) i++;
        }
        j--;
    }

    cout<<counter;

    return 0;
}
