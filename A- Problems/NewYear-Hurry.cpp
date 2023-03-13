#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, sum = 0, i=1, count=0;
    cin >> n >> k;
    int somme = 0;

    while(i<=n){
        sum += 5*i;
        somme = sum + k;
        if(somme > 240){
            break;
        }
        i++;
        count++;
     }
    cout << count;
    
    return 0;
}