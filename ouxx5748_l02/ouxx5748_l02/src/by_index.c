/**
 * -------------------------------------
 * @file  by_index.c
 * -------------------------------------
 * @author Zi Feng (Alex) Ou, 169025748, ouxx5748@mylaurier.ca
 *
 * @version 2024-05-22
 *
 * -------------------------------------
 */
#include "by_index.h"

void fill_values_by_index(int values[], int size) {

	for (int i = 0; i < size; i++) {
		values[i] = i + 1;
	}
}

void fill_squares_by_index(int values[], long int squares[], int size) {

	// your code here

	for (int i = 0; i < size; i++) {
		squares[i] = values[i] * values[i];
	}

}

void print_by_index(int values[], long int squares[], int size) {

	// your code here

	printf("Value  Square\n");
	printf("-----  ----------\n");

	for (int i = 0; i < size; i++) {
		squares[i] = values[i] * values[i];
		printf("%5d  %10ld\n", values[i], squares[i]);
	}

}
