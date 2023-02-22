#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;

  cin >> n;
  map<int, int> map1;

  int item;
  for(int i=1; i<=n; i++){
    cin >> item;
    map1[i] = item;
  }

  
  map<int, int> map2;

  for (auto i=map1.begin(); i!= map1.end(); ++i){
    map2[i->second] = i->first;
  }

  

  for (auto i=map2.begin(); i!= map2.end(); ++i){
    cout << i-> second << " ";
  }

  return 0;
}