#include <bits/stdc++.h>


using namespace std;
int main(){
  int k, n, w;

  cin >> k >> n >> w;

  int sumAPayer = 0;
  for(int i=1; i<=w; i++){
    sumAPayer += i * k; 
  }

  if(n >= sumAPayer){
      cout << 0;
  }else{
    int sumToBorrow = sumAPayer - n;
    cout << sumToBorrow;
  }
  return 0;
}