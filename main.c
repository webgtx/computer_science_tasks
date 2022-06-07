// webgtx @ 2020
// dxv1d@tuta.io
#include <stdio.h>
#include <stdlib.h>
#include "./lib/dxtlib.c" // My own lib 
#include "./algorithms/mergesort.c"

int main(int argc, char **argv)
{
  int acntr = argc;
  int arr[10];
  puts("|  IDX  | INT | LEN");
  for (unsigned idx = 0; idx < acntr; idx++) {
    arr[idx] = atoi(*argv++);
    printf("idx: %2i %5i %5i\n", idx, arr[idx], acntr);
  }
	// int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0;
}
