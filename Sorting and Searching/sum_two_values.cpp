#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

/*int binary_search_index(vector<pair<ll, ll>> &a,ll diff,ll st,ll en, ll m){
    //cout<<diff<<" "<<a[m].first<<" "<<st<<" "<<en<<" "<<m<<"\n";
    if(a[m].first==diff) return m;

    if(st>=en) return -1;
    if(a[m].first<diff) return binary_search_index(a,diff, m, en, (en-(m+1))/2+m+1);
    if(a[m].first>diff) return binary_search_index(a,diff, st, m, (m-st)/2+st);
}*/


int main(){
    ll n, x;
    cin>>n>>x;

    vector<pair<ll, ll>> a;

    for (int i=0; i<n; i++){
        ll ai;
        cin>>ai;
        a.push_back({ai, i});
    }

    sort(a.begin(), a.end());

    int i=0, j=n-1;

    while(i<j){
        if(a[j].first<x){
            if(a[i].first+a[j].first==x) {
                cout<<a[i].second+1<<" "<<a[j].second+1;
                return 0;
            }
            if(a[i].first+a[j].first<x) i++;
            else j--;
        }
        else j--;
    }

    cout<<"IMPOSSIBLE";
    return 0;
}
