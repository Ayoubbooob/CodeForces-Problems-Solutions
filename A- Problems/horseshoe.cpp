#include <bits/stdc++.h>

using namespace std;

int main(){



  set<int> s;
  int item;
  for(int i=0; i<4; i++){
     cin >> item;
      s.insert(item);
  }

  int res = 4 - s.size();
   cout << res;
  return 0;
}