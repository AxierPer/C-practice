#include <stdio.h>
#include <time.h>

int main() {
    // Obtener el tiempo de inicio
    clock_t start_time = clock();
  
    // Hacer algo que tome tiempo, por ejemplo, imprimir números
    for (int i = 0; i < 100000; i++) {
        printf("%d\n", i);  // Usamos printf en lugar de std::cout
    }

    // Obtener el tiempo de finalización
    clock_t end_time = clock();

    // Calcular el tiempo total en milisegundos
    double total_time = ((double)(end_time - start_time)) / CLOCKS_PER_SEC * 1000;

    // Imprimir el tiempo total de ejecución en milisegundos
    printf("Tiempo total de ejecución: %.3f milisegundos.\n", total_time);

    return 0;
}
