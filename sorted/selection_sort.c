#include <stdio.h>

int main () {
  int numbers[] = {25,36,0,42,10,1,5,20,3,86,2,11};
  int aux, min_pos;
  int arr_size = sizeof(numbers) / sizeof(numbers[0]);

  // Ciclo para realizar la cantidad de veces segun el array size
  for (int i = 0; i <=  arr_size - 1 ; i++) {

    // Captura la primera posicion
    min_pos = i;

    // ciclo donde itera y compara la los numeros de la posicion del ciclo mirando cual es el minimo si el del  array o la posicion minima
    for(int x = i + 1; x < arr_size; x ++){

      // Comparacion de valores
      if (numbers[x] < numbers[min_pos]){

        // Asignacion de la posicion que es menor
        min_pos = x;
      }

    }

    // Aqui se guarda el numero en la posicion donde se va a uintercambiar por el valor minimo
    aux = numbers[i];

    // Aqui cambiamos el valor en la posicion i por el valor de la posicion donde esta numero minimo
    numbers[i] = numbers[min_pos];

    // Aqui volvemos a cambiar el valor de de la posicion minima por el valor de que guardamos en la variable auxiliar que tiene el numero de la posicion inicial
    numbers[min_pos] = aux;
  }

  for (int i = 0; i < arr_size ; i++){
    printf("%d\n", numbers[i]);
  }
}
