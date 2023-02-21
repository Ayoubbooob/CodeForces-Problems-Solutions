// #include <bits/stdc++.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
  string s;

  cin >> s;
  
  char c = s[0];

  char capitalChar = toupper(c);

  s[0] = capitalChar;


  cout << s;
}