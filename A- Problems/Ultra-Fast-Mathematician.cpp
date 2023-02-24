#include <bits/stdc++.h>
using namespace std;

int main(){

  string s;
  string l;
 
  cin >> s >> l;
  for(int i=0; i<s.length(); i++){
    if(s[i] == l[i]){
      cout << 0; 
    }else{
      cout << 1; 
    }
  }
  
  return 0;
}