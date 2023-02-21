#include <bits/stdc++.h>

using namespace std;

int main(){

  string s;
  cin >> s;


  int countLower = 0, countUpper = 0;
  for(int i=0; i<s.length(); i++){
    if(islower(s[i])){
      countLower++;
    }else{
      countUpper++;
    }
  }

  

  if(countLower >= countUpper){
    
    transform(s.begin(), s.end(), s.begin(), :: tolower);
  
  }else{
    transform(s.begin(), s.end(), s.begin(), :: toupper);
  }

  cout << s;
  return 0;
}