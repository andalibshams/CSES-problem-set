#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<pair<ll, ll>> a;

    for(int i=0; i<n; i++){
        ll a_in, b_in;
        cin>>a_in>>b_in;

        a.push_back({b_in, a_in});
    }

    sort(a.begin(), a.end());

    int i = 0, j = 1, c = 1;

    while(i<n-1 && j<n){

        if(a[i].first<=a[j].second){i=j;j++;c++;}
        else{j++;}

       // cout<<a[i].second<<" "<<a[j].first<<" "<<i<<" "<<j<<" "<<c<<"\n";
    }

    cout<<c;

    return 0;
}
