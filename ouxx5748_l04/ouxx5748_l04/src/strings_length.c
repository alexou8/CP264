/** @file  strings_length.c
 * -------------------------------------
 * @author Zi Feng (Alex) Ou, 169025748, ouxx5748@mylaurier.ca
 *
 * @version 2025-05-04
 *
 * -------------------------------------
 */
#include "functions.h"

void strings_length(strings_array *source, FILE *fp_short, FILE *fp_long,
		int length) {

	// your code here

	for (int i = 0; i < source->capacity; i++) {
		if (strlen(source->strings[i]) < length) {
			fprintf(fp_short, "%s\n", source->strings[i]);
		} else {
			fprintf(fp_long, "%s\n", source->strings[i]);
		}
	}

}
