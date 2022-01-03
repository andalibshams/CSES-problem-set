#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
    ll t, y, x;

    cin>>t;

    for (ll i=0; i<t; i++){
        cin>>y>>x;

        ll m =max(y, x);

        ll rem = m%2, result;

        if(rem==0){
            if(y>x) result = m*m -x+1;
            else result = (m-1)*(m-1)+y;
        }
        else{
            if(x>y) result=m*m-y+1;
            else result = (m-1)*(m-1)+x;
        }
        cout<<result<<"\n";
    }
    return 0;
}
