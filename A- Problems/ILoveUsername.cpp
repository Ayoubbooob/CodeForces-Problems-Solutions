#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, max=0, min=0, item, count=0;
    cin >> n;
    for(int i=0; i<n ; i++){
        cin >> item;
        if(i>0){
            
            if(item > max){
                max = item;
                count++;
            }
            if(item < min){
                min = item;
                count++;
            }
        }else{
            min = item;
            max = item;
        }
        

    }
    cout << count;
    return 0;
}