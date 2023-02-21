#include <iostream> 
#include <cstdlib>

int main(){

  int rowOne = 0;
  int comlumnOne = 0;
  int arr[5][5];
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      scanf("%d" , &arr[i][j]);
      if(arr[i][j] == 1){
          rowOne = i;
          comlumnOne = j;
      }
    }
  }

  int output = 0;

  if(abs(rowOne - 2) < abs(comlumnOne - 2) ){
      while (rowOne != 2){
          if(rowOne > 2){
          rowOne--;
          output++;
          }else{
            rowOne++;
            output++;
          }
      }

      while (comlumnOne != 2){
          if(comlumnOne > 2){
          comlumnOne--;
          output++;
          }else{
            comlumnOne++;
            output++;
          }
      }
  }else{
    while (comlumnOne != 2){
        if(comlumnOne > 2){
        comlumnOne--;
        output++;
        }else{
          comlumnOne++;
          output++;
        }
    }

        while (rowOne != 2){
            if(rowOne > 2){
            rowOne--;
            output++;
            }else{
              rowOne++;
              output++;
            }
        }

  }

  

printf("%d", output);

  
  
}