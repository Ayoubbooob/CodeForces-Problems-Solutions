#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    set<char> myset;
    for(char c : s){
        if(c != ' ' && c != ',' && c!='{' && c!='}'){
            myset.insert(c);
        }
    }

    cout << myset.size();
    return 0;
}