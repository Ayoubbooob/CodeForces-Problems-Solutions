#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int t, a, b, count;
    cin >> t;

    while(t--){
        cin >> a >> b;
        cout << (abs(a-b) +  9) /10 << endl;
    }
    return 0;
}