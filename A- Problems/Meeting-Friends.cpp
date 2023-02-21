#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;
int main(){

  
  int arr[3];

  for(int i=0; i<3; i++){
    cin >> arr[i];
  }

  sort(arr, arr+3);

  int output = abs(arr[1] - arr[0]) + abs(arr[1] - arr[2]);

  cout << output; 
  return 0;
}