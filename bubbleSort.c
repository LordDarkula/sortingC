#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
	
	int unsorted [] = {4, 5, 1, 8, 3, 2, 7, 6};
	
	bool swaps = true;
	while( swaps ) {
	swaps = false;
		for(int i = 1; i < sizeof(unsorted)/sizeof(int); i++) {
			if (unsorted[i -1] > unsorted[i]) {
				int temp = unsorted[i];
				unsorted[i] = unsorted[i - 1];
				unsorted[i - 1] = temp;
				swaps = true;
			}
		}
	}
	
	printf("{ ");
	for(int p = 0; p < sizeof(unsorted)/sizeof(int); p++) {
	
		printf("%d ", unsorted[p] );
	
	}
	printf("} \n");
	
	return 0;
}