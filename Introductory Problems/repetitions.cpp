#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll len = 1, cur_len = 1;
    string s;
    cin>>s;

    for (ll i=1; i<s.length(); i++){
        if(s[i]==s[i-1]) cur_len++;
        else cur_len = 1;

        if(cur_len>len) len = cur_len;
    }

    cout<<len;

    return 0;
}
