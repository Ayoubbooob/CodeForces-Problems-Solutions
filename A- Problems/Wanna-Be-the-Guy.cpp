#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;

  int p, q, item;
  cin >> p;
  set<int> s;
  for(int i=0; i<p; i++){
    cin >> item; 
    s.insert(item);
  }

  cin >> q;
  for(int i=0; i<q; i++){
    cin >> item; 
    s.insert(item);
  }

  

  if(s.size() == n){
    cout << "I become the guy.";
  }else{
    cout << "Oh, my keyboard!";
  }
  return 0;
}