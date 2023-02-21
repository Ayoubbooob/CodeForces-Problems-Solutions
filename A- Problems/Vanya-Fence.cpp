#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int n, h;
  cin >> n >> h;

  int res = 0;
  int item;
  for(int i=0; i<n; i++){
    cin >> item;
    if(item <= h){
      res++;
    }else{
      res+=2;
    }
  }

  cout << res;
  return 0;
}