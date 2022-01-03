#include <bits/stdc++.h>
 
typedef long long ll;
 
using namespace std;
 
int main(){
    ll n;
    cin>>n;
 
    vector<ll> ara(n);
    ll s = 1, temp = 0;
 
    for (ll i=0; i<n; i++)    cin>>ara[i];
    sort(ara.begin(), ara.end());
 
    for (ll i=0; i<n; i++) {
        if(ara[temp]!=ara[i]){
            s++;
            temp = i;
        }
    }
 
 
    cout<<s;
 
    return 0;
}