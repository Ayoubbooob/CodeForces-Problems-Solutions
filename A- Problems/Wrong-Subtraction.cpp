#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, k;

  cin >> n >> k;

  
  for(int i=0; i<k; i++){
    string s = to_string(n);
    if(s[s.length() - 1] == '0'){
      n = n / 10;
    }else{
      n -= 1;
    }
  }

  cout << n;
  return 0;
}