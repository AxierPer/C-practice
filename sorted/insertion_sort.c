#include <stdio.h>

void insertion_sort_for(int arr[], int n){
  for(int i = 1; i <= n - 1; i ++){

    int key = arr[i];
    int value = i - 1;

    for(int x = i - 1; x >= 0 ; x--) {
      if(arr[value] > key){
        arr[value + 1] = arr[value];
        value = value - 1;
      }
    }
    arr[value + 1] = key;
  }
}

void insertion_sort_while(int arr[], int n){
  for(int i = 1; i <= n - 1; i ++){

    int key = arr[i];
    int value = i - 1;

    while(value >= 0 && arr[value] > key){
      arr[value + 1] = arr[value];
      value = value - 1;
    }

    arr[value + 1] = key;
  }
}

void print_sort(int arr[], int n){
  for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}


int main (){
  int arr[] = {25,32,55,2,15,3,6,66,78,1,35,0};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Original array: ");
  print_sort(arr, n);

  insertion_sort(arr,n);


  printf("Sorted array: ");
  print_sort(arr, n);
  return 0;
}
