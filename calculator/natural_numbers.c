#include <stdio.h>

int main(){
  int number, suma = 0;

  printf("Digite un numero positivo para calcular la suma de numeros naturales: ");
  scanf("%d", &number);

  if (number <= 0){
    printf("Por favor digite un numero mayor a 0");
    return 1;
  }

  for (int i = 1; i <= number; i++) {
    suma += i;
  }

  printf("La suma de los primeros %d numeros naturales es: %d\n",number, suma);
  return 1;
}
