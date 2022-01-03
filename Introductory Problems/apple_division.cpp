#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll minimum_difference(ll* ara, ll s, ll orig, int siz){
    if(s<0) return -1;
    ll minm = s;
    for (int p = orig; p<siz; p++){
        int ret = minimum_difference(ara,s-ara[p], p+1, siz);
        if(ret>=0 && minm>ret) minm = ret;
    }
    return minm;
}

int main(){
    int n;
    cin>>n;

    ll ara[n], s = 0, difference;

    for(int i = 0; i<n; i++)    {
        cin>>ara[i];
        s+= ara[i];
    }

    ll hs = ll(s/2+s%2);

    difference = minimum_difference(ara, hs, 0, n);

    ll res = s - (hs- difference)*2;
    if(difference==0)   res += 2*(s%2);

    cout<<res;

    return 0;
}
