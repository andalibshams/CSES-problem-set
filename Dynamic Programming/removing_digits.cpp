#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    int n;
    cin>> n;

    vector<int> v;
    v.push_back(0);

    for(int i=1; i<=n; i++){
        v.push_back(1000000);

        int left = i, curr_ch;

        while(1){
            curr_ch = left%10;
            v[i] = min(v[i], v[i-curr_ch]+1);
            left = left/10;
            if(left==0) break;
        }
        cout<<i<<" "<<v[i]<<"\n";
    }

    cout<<v[n];

    return 0;
}
