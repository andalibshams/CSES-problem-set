#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll n;
    cin>>n;

    ll m = pow(10,9)+7;//numeric_limits<ll>::max();

    vector<ll> v;
    vector<bool> used;

    int dices[6] = {1,2,3,4,5,6};

    v.push_back(1);

    for(int i=1; i<=n; i++){
        v.push_back(0);

        for(auto c: dices){
            if(i-c>=0){
                v[i] += v[i-c];
                v[i] %= m;
            }
        }
    }

    cout<<v[n];

    return 0;
}
