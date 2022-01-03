#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll n;
    cin>>n;

    ll s = n*(n+1)/2;

    if(s%2){
        cout<<"NO";
        return 0;
    }
    cout<<"YES\n";
    s = s/2;

    ll i=1, j=n, sum_c = 0;

    cout<<n/2<<"\n";

    while(1){

        sum_c += j;
        cout<<j<<" ";
        if(sum_c==s)  {
            i--;
            break;
        }

        sum_c += i;
        cout<<i<<" ";
        if(sum_c==s)    break;
        i++;
        j--;
    }

    cout<<"\n"<<n-n/2<<"\n";

    for(ll p = i+1; p<j; p++) cout<<p<<" ";

    return 0;
}
