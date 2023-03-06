#include <bits/stdc++.h>

using namespace std;

int main(){

    string a, b, c;
    cin >> a >> b >> c;

    string s = a + b;
    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if(s.compare(c) == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}