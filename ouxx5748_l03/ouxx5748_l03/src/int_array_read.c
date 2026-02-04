/**
 * -------------------------------------
 * @file  int_array_read.c
 * -------------------------------------
 * @author Zi Feng (Alex) Ou, 169025748, ouxx5748@mylaurier.ca
 *
 * @version 2025-05-04
 *
 * -------------------------------------
 */
#include "functions.h"

void int_array_read(int *array, int size) {

	// your code here

	char line[STRING_SMALL];
	int num;
	int i = 0;

	printf("Enter %d values for an array of int.\n", size);
	printf("Value for index 0: ");

	while (fgets(line, sizeof(line), stdin)) {
		if (sscanf(line, "%d", &num) == 1) {
			array[i] = num;
			i++;

			if (i == size) {
				break;
			}

			printf("Value for index %d: ", i);
		} else {
			printf("Not a valid integer\n");
			printf("Value for index %d: ", i); // <- repeat prompt after invalid input
		}
	}

}
