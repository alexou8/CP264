/**
 * -------------------------------------
 * @file  main.c
 * -------------------------------------
 * @author Zi Feng (Alex) Ou, 169025748, ouxx5748@mylaurier.ca
 *
 * @version 2025-05-04
 *
 * -------------------------------------
 */
#include "parameters.h"

/**
 * Test the various parameter handling functions.
 *
 * @param argc - size of argv
 * @param argv - array of strings passed on command line
 * @return EXIT_SUCCESS
 */
int main(int argc, char *argv[]) {
	setbuf(stdout, NULL);
	parameters(argc, argv);
	return EXIT_SUCCESS;
}
