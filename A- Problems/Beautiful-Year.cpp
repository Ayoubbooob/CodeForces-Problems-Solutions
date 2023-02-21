#include <bits/stdc++.h>

using namespace std;

bool isBeautiful(int y){
  string year = to_string(y);

  set<char> s;

  for(char c : year){
    s.insert(c);
  }

  return s.size() == year.length();

}

int main(){

  int y;
  cin >> y;
  int result = y + 1;
  while(!isBeautiful(result)){
    result++;
  }
  cout << result;

  return 0;
}

