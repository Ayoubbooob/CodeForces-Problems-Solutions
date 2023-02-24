#include <bits/stdc++.h>

using namespace std;

int main(){

  int n;
  cin >> n;

  float d, res = 0;
  for(int i=0; i<n; i++){
    cin >> d;
    res += d;
  }

  // n = static_cast<float>(n) ; 
  res = res / static_cast<float>(n);

  printf("%.12f", res);
  return 0;
}