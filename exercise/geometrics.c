#include <stdio.h>

int main(){

  for (int i = 0; i < 10; i++) {
    for (int x = 0; x < 10; x++) {

      if ((x == 0 || x ==9) || (i == 0|| i == 9)){
        printf("%c ",'*');
      }
      else {
        printf("%c ", ' ');
      }
    }
    printf("\n");
  }

  return 0;
}
