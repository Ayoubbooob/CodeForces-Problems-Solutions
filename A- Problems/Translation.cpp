#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, t;
  cin >> s >> t;

  if(s.length() != t.length()){
    cout << "NO";
    return 0; 
  }
  for(int i=0, j = t.length() -1 ; i<s.length(); i++, j--){
    if(s[i] != t[j]){
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
  return 0;
}