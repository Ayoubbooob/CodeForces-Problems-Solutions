#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    while (n / 100 != 0){
        count += n/100;
         n = n % 100;
        if(n == 0){
            cout << count;
            return 0;
        }
    }
    
    while (n /20 !=0){
        count += n/20;
        n = n%20;
         if(n==0){
            cout << count;
            return 0;
        }
    }
     while (n /10 !=0){
        count += n/10;
        n = n%10;
         if(n==0){
            cout << count;
            return 0;
        }
    }

    while (n /5 !=0){
        count += n/5;
        n = n%5;
         if(n == 0){
            cout << count;
            return 0;
        }
    }

    
    count += n;
    cout << count;

    return 0;
}