/**
 * -------------------------------------
 * @file  sum_integers.c
 * -------------------------------------
 * @author Zi Feng (Alex) Ou, 169025748, ouxx5748@mylaurier.ca
 *
 * @version 2025-05-04
 *
 * -------------------------------------
 */
#include "functions.h"

int sum_integers(void) {

	// your code here

	char line[STRING_SMALL];
	int num = 0;
	int sum = 0;

	printf("Enter integers, one per line:\n");

	while (fgets(line, sizeof(line), stdin)) {
		if (sscanf(line, "%d", &num) == 1) {
			sum += num;
		} else {
			break;
		}
	}

	return sum;

}
