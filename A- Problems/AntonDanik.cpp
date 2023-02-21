#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  string s;

  cin >> n ; 
  cin >> s;

  int countA = 0, coundD = 0;
  map<string, int> result;
  result["Anton"] ;
  result["Danik"];
  for(int i=0; i<n; i++){
    if(s[i] == 'A'){
      result["Anton"]++;
    }else{
      result["Danik"]++;
    }
  }

  if(result["Anton"] > result["Danik"]){
    cout << "Anton";
  }else if(result["Anton"] < result["Danik"]){
    cout << "Danik";
  }else{
    cout << "Friendship";
  }
  return 0;
}