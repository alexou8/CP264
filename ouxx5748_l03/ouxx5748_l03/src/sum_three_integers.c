/**
 * -------------------------------------
 * @file  functions.c
 * -------------------------------------
 * @author Zi Feng (Alex) Ou, 169025748, ouxx5748@mylaurier.ca
 *
 * @version 2025-05-04
 *
 * -------------------------------------
 */
#include "functions.h"

int sum_three_integers(void) {

	// your code here

	char line[STRING_SMALL];
	int num1, num2, num3;
	int sum = 0;

	printf("Enter three comma-separated integers: ");
	while (fgets(line, sizeof(line), stdin)) {
		if (sscanf(line, "%d,%d,%d", &num1, &num2, &num3) == 3) {
			sum = num1 + num2 + num3;
			break;
		} else {
			printf("The integers were not properly entered.\n");
			printf("Enter three comma-separated integers: ");
		}
	}

	return sum;

}
