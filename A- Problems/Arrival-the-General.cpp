#include <bits/stdc++.h>
using namespace std;



int main(){

  int n, max, min, posimax, posimin;
  cin >> n;
  int arr[n];


  for(int i=0; i<n; i++){
    cin >> arr[i];
    

  }


max=arr[0], min=arr[0], 
posimax = 0, posimin = 0;

  for(int i=1; i<n; i++){
    if(max < arr[i]){
      max = arr[i];
      posimax = i;
    }

    if(min >= arr[i]){
      min = arr[i];
      posimin = i;
    }

  }
  int res = 0;
  if(posimax > posimin) {
    res = abs(n-1 - posimin - 1) + abs(0 -posimax -1) - 1;
  }else{
    res = (n-1 - posimin ) + (posimax );
  }
  
  cout << res;




  return 0;
}