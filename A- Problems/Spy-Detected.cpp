#include  <bits/stdc++.h>
using namespace std;


int numOccurence(int num, int arr[100]){
  int l = sizeof(arr) / sizeof(arr[0]);
  int arr2[l];
  for(int i=0; i<l; i++){
  
      if(arr[i] == num){
        arr2[i]++; 
      }
    
  }

}
int main(){

  int t, n;

  cin >> t;

  for(int i=0; i<t; i++){
    int n;
    cin >> n;

    map<int, int> map;
    int arr[n];
    
    for(int j=0; j<n; j++){
      int item;
      cin >> item; 
      map[item] = 1;
    }

   
    
  }
  return 0;
}