#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int head = 1;
    for(int i=0; i<n; i++){
        if(i%2 != 0){

            if(head == 1){
                cout << "#";
                for(int j=1; j<m; j++){
                 cout << ".";
                           
                }
            } else{
                
                for(int j=0; j<m-1; j++){
                 cout << ".";
                }
                cout << "#";
            } 
            
            
            cout << endl;
                

            
        }else{
            if(head == 1){
                for(int j=0; j<m; j++){
                        cout << "#"; 
                        head++;
                            
                }

            }else{
                for(int j=0; j<m; j++){
                        cout << "#"; 
                        head--;
                            
                }  
                    
            }

                    cout << endl;
               
                        

        }
        
    }
    
return 0;
}

