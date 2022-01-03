#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll n;
    cin>>n;

    ll sum_z = 0, five_exp = 5;

    while(1){
        sum_z += n/five_exp;
        five_exp *= 5;
        if(five_exp>n) break;
    }

    cout<<sum_z;

    return 0;
}
