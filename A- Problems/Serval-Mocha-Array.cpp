#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}


int main(){

  int t, n;
  cin >> t;
  string res[t];
  for(int i=0; i<t; i++){
    cin >> n;
    int arr[n];
    for(int j= 0; j<n; j++){
      cin >> arr[j];
    }
      int min = numeric_limits<int>::max();
    for(int k=0; k<n; k++){
      for(int a=0; a<n; a++){
        if(k != a && min > gcd(arr[k] , arr[a])){
          min = gcd(arr[k] , arr[a]);
        }
      }
      
    }

    if(min > 2){
      res[i] = "NO";
    }else{
      res[i] = "YES";
    }
  }

  for(string s : res){
    cout << s << endl;
  }


    
  return 0;
}