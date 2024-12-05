#include <stdio.h>


int main() {
  int original[]={44,55,12,42,94,18,6,67};
  int aux=0;
  int longitude = sizeof(original) / sizeof(original[0]);

  for(int x=0;x<longitude;x++){

    for(int i=longitude;i>=x;i--){
    
      if(original[i] < original[i-1]){

        aux=original[i-1];
        original[i-1]=original[i];
        original[i]=aux;
        
      }

    }

  }
  for(int i=0;i<=longitude; i++){

    printf("%d\n",original[i]);

  }
  return 0;
}
