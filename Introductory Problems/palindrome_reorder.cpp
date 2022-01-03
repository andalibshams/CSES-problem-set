#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin>>s;
    long long s_len = s.length();
    vector<int> v(26,0);

    int indx;

    for(int i=0; i<s_len; i++){
        indx = int(s[i]) - 65;
        v[indx]++;
    }
    char c, ch, mid_ch;
    c = 'A';
    mid_ch = 'a';
    vector<pair<int, char>> v_count;

    for (int i=0; i<26; i++){
        v_count.push_back({ -v[i], c});
        c++;
    }

    sort(v_count.begin(), v_count.end());
    vector<char> ch_v;

    int n, m = 0;
    indx = 0;

  /* for(int i=0; i<26; i++){
        cout<<-v_count[i].first<<" "<<v_count[i].second<<"\n";
    }*/

    while(1){
        n = -v_count[indx].first;
        ch = v_count[indx].second;
        if(n==0 || indx==26) break;

        if(m==1 && n%2){
            cout<<"NO SOLUTION";
            return 0;
        }

        for (int i=0; i<n/2; i++) ch_v.push_back(ch);

        if(n%2) {
            mid_ch = ch;
            m = 1;
        }

        indx++;
    }

    if(mid_ch != 'a') ch_v.push_back(mid_ch);

    indx--;

    while(indx>=0){
        n = -v_count[indx].first;
        ch = v_count[indx].second;
        for (int i=0; i<n/2; i++) ch_v.push_back(ch);

        indx--;
    }

    for(int i=0; i<s_len; i++) cout<<ch_v[i];

    return 0;
}
