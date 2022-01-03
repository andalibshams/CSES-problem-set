#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
   int n, x, maxm = 0;

   cin>>n>>x;

   vector<int> h, s;
    h.push_back(0);
    s.push_back(0);


   for (int i=0; i<n; i++) {
        int hi;
        cin>>hi;
        h.push_back(hi);
   }

   for (int i=0; i<n; i++) {
        int si;
        cin>>si;
        s.push_back(si);
   }

   vector<int> h_2d, s_2d;

   for(int i=0; i<=x; i++){
        h_2d.push_back(0);
        s_2d.push_back(0);
   }

   h_2d[0] = 1;

   for(int i=1; i<=n; i++){
        for(int j=x-h[i]; j>=0; j--){
            h_2d[j+h[i]] |= h_2d[j];

            s_2d[j+h[i]] = max(s_2d[j+h[i]], s_2d[j]+s[i]);

            maxm = max(maxm, s_2d[j+h[i]]);
        }
   }

   cout<<maxm;

   return 0;
}
