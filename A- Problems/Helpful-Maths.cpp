#include <bits/stdc++.h>

using namespace std;



int main(){


string s;

 cin >> s;

char arr[100];

int k=0;
for(int i=0; i<s.length(); i++){
  if(s[i] != '+'){
    arr[k++] = s[i]; 
  }
}

sort(arr, arr+k);
for(int i=0; i<k; i++){
  if(i!=k-1)
  cout << arr[i] << "+";
  else cout << arr[i] ;
}


 


  return 0;
}


