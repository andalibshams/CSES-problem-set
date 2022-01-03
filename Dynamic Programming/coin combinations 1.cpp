#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main(){
    int n, x;
 
    cin>>n>>x;
 
    ll m = pow(10, 9)+7;
 
    vector<ll> c, v;
 
    for(int i=0; i<n; i++) {
        ll ci;
        cin>>ci;
        c.push_back(ci);
    }
 
    v.push_back(1);
 
    for(int i=1; i<=x; i++){
        v.push_back(0);
        for(auto c_i: c){
            if(i-c_i>=0)    {
                v[i] += v[i-c_i];
                v[i]%=m;}
        }
    }
 
 
    cout<<v[x];
 
    return 0;
}