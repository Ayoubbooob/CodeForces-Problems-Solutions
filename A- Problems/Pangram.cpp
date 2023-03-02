#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> se;
    for(int i=0; i<n; i++){
        se.insert(toupper(s[i]));
    }

    if(se.size() == 26){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}