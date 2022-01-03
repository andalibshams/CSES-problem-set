#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

/*int binary_searc_apt(vector<ll> &apt_size, ll desired, int k, int st, int en, int mid){
    //cout<<apt_size[mid]<<" "<<desired<<" "<<k<<" "<<st<<" "<<en<<" "<<mid<<"\n";
    if(apt_size[mid]>=desired-k && apt_size[mid]<=desired+k){
        apt_size.erase(apt_size.begin()+mid);
        return 1;
    }

    if(st==en) return 0;
    if(apt_size[mid]>desired+k)  return binary_searc_apt(apt_size, desired, k, st, mid, mid/2);
    if(apt_size[mid]<desired-k)  return binary_searc_apt(apt_size, desired, k, mid+1, en, (en+mid)/2);

}*/


int main(){
    int n, m, counter = 0;
    ll k;
    cin>>n>>m>>k;

    vector<ll> apt_size, des_siz;

    for(int i=0; i<n; i++){
        ll a;
        cin>>a;
        apt_size.push_back(a);
    }

    for(int i=0; i<m; i++){
        ll a;
        cin>>a;
        des_siz.push_back(a);
    }

    sort(apt_size.begin(), apt_size.end());
    sort(des_siz.begin(), des_siz.end());

    int i=0, j=0;

    while(i<n && j<m){
        if(apt_size[i]<des_siz[j]-k) i++;
        else if(apt_size[i]>des_siz[j]+k) j++;
        else{i++; j++; counter++;};
    }
    cout<<counter;

    return 0;
}
