#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
int main() {
    long long N,D;
    bool debug=false;
    while (cin >> N >> D)
    {
        if(N == 0 && D == 0)
        break;

        string in;
        cin >> in;
        ll toRemove=D;
        string sstack="";
        
        for(int i = 0; i < N; i++)
        {
            if (debug==true){
            cout << " i : " << i << "\n";
            cout << "stack : " << sstack << "\n";
            }

            if(i==0)
            {
                sstack.push_back(in[i]);
                if(debug==true)
                cout << "first " << in[i] << "\n";
                continue;
            }


            while(!(sstack.size() <= 0) && sstack.back() < in[i] && toRemove > 0)
            {
                sstack.pop_back();
                toRemove--;                
            }
            sstack.push_back(in[i]);

        }
        if(toRemove > 0)
        {
            while(toRemove != 0)
            {
                sstack.pop_back();
                toRemove--;
            }
        }
        if(debug == true)
        cout << "======answ :  "; 

        cout << sstack << "\n";
    }
    return 0;
}