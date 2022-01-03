#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void gray_code_print(int n, vector<int> &counter, vector<int> &counterMax,vector<int> &value){
    int maxN = pow(2, n);

    for (int j=0; j<maxN; j++){
        int change = 0;
        for (int i=0; i<n; i++){

            if(counter[i] == counterMax[i]/2 && change == 0){
                value[i] = (value[i] + 1)%2;
                change = 1;
                //cout<< "change "<< i<<endl;
            }

            cout<<value[i];
            counter[i]++;

            if(counter[i] == counterMax[i]) counter[i] = 0;

        }
        cout<<endl;
    }
}



int main()
{
    int n;

    cin>> n;

    vector <int> counterMax, counter, value;

    for (int i=0; i<n; i++){
        counter.push_back(0);
        counterMax.push_back(pow(2, n- i));
        value.push_back(0);
    }


    gray_code_print(n, counter, counterMax, value);


    return 0;
}
