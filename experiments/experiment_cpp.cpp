#include <iostream>
#include <chrono>

int main(){
  auto start_time = std::chrono::high_resolution_clock::now();
  
  for (int i = 0; i<100000;i++){
    std::cout << i << std::endl;
  }

  auto end_time = std::chrono::high_resolution_clock::now();

  auto total_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

  std::cout << "Tiempo total de ejecución: " << total_time.count() << " milisegundos." << std::endl;

  return 0;
}
