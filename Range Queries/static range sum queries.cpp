#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main(){
    int n, q, a, b;
    vector<ll> x;
    ll xi, prev = 0;
 
    cin>>n>>q;
 
    for(int i=0; i<n; i++){
        cin>>xi;
        prev = prev+xi;
        x.push_back(prev);
    }
 
    while(q--){
        cin>>a>>b;
        a--; b--;
        if(a>=1)    cout<<x[b]-x[a-1]<<"\n";
        else cout<<x[b]<<"\n";
    }
 
 
    return 0;
}