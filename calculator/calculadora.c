#include <stdio.h>

int main() {
  double num1, num2, result;
  char operator;

  printf("Introduce el primer numero: ");
  scanf("%lf", &num1);

  printf("Introduce uno de los operadores (+, -, *, /)");
  scanf(" %c", &operator);

  printf("Introduce el segundo numero: ");
  scanf("%lf", &num2);

  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      if(num2 != 0){
        result = num1 / num2;
      } else{
        printf("Error: no se puede dividir entre 0");
        return 1;
      }
      break;
    default:
      printf("Operador no valido\n");
        return 1;
  }

  printf("Resultado: %.2lf\n", result);
  return 0;
}
