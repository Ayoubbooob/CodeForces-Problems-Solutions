#include <bits/stdc++.h>

using namespace std;

int main(){

  int n, a, b;

  cin >> n ;

  int arr[n];
  for(int i=0; i<n; i++){
    cin >> a ;
    cin >> b;
    if(i==0) arr[i] = b;
    else if (i==n-1){
      arr[i] = 0;
    }else{
      arr[i] = arr[i-1] - a + b;
    }
  } 

  int max = arr[0]; 
  for(int i=0; i<n; i++){
    if(max < arr[i]){
      max = arr[i];
    }
  }

  cout << max ;
  return 0;
}