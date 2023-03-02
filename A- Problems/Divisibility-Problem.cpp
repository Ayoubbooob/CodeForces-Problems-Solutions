#include <bits/stdc++.h>
using namespace std;

int main(){
  int t, a, b;
  cin >> t;
  int res[t] ;
  for(int i=0; i<t; i++){
    cin >> a >> b;
    a % b == 0  ? res[i] = 0 : res[i] = b - a%b ;
  }

  for(int item: res){
    cout << item << endl;
  }
  return 0;
}