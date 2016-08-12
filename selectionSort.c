#include <stdio.h>

int main(int argc, char *argv[]) {

	int unsorted [] = {8, 5, 3, 9, 2, 1, 7, 4 };
	
	for (int sub = 0; sub < sizeof(unsorted)/sizeof(int); sub++) {
		int minIndex = sub;
		for(int hand = sub; hand < sizeof(unsorted)/sizeof(int); hand++) {
			if (unsorted[hand] < unsorted[minIndex]) {
				minIndex = hand;
			}
		}
		int temp = unsorted[sub];
		unsorted[sub] = unsorted[minIndex];
		unsorted[minIndex] = temp;
	}
	
	printf("{ ");
	for(int p = 0; p < sizeof(unsorted)/sizeof(int); p++) {
	
		printf("%d ", unsorted[p] );
	
	}
	printf("} \n");
}