#include <stdio.h>

int main(int argc, char *argv[]) {

	int unsorted [] = { 10, 4, 5, 2, 20, 6 };
	
	for(int i = 1; i < sizeof(unsorted)/sizeof(int); i++) {
		while (unsorted[i] < unsorted[i - 1]) {
			int temp = unsorted[i];
			unsorted[i] = unsorted[i - 1];
			unsorted[i - 1] = temp;
			
			if (i == 1) {
				break;
			}
			
			i--;
		}
	}
	
	printf("{ ");
	for(int p = 0; p < sizeof(unsorted)/sizeof(int); p++) {
	
		printf("%d ", unsorted[p] );
	
	}
	printf("} \n");
	
	return 0;
}