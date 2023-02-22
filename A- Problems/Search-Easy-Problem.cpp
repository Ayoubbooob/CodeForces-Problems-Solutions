#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin >> n;

  int item;
  bool isHard = false;
  for(int i=0; i<n; i++){
    cin >> item;
    if(item == 1){
      isHard = true;
      break;
    }
  }

  isHard ? cout << "HARD" : cout << "EASY";
  return 0;
}