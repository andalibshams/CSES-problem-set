#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n, c=0, m=0;
    cin>>n;
    //if(n>0) c = 1; m=1;
    vector <ll> a, b;

    for (int i=0; i<n; i++){
        ll a_in, b_in;
        cin>>a_in>>b_in;
        a.push_back(a_in);
        b.push_back(b_in);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;

    while(i<n){
        if(b[j]<a[i]){c--;j++;continue;}
        if(b[j]==a[i]){j++; i++; continue;}
        else{i++; c++;}
        if(c>m) m = c;
    }

    cout<<m;

    return 0;
}
