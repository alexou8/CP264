/** @file  strings_with_substring.c
 * -------------------------------------
 * @author Zi Feng (Alex) Ou, 169025748, ouxx5748@mylaurier.ca
 *
 * @version 2025-05-04
 *
 * -------------------------------------
 */
#include "functions.h"

void strings_with_substring(strings_array *source, char *substr) {

	// your code here

	for (int i = 0; i < source->capacity; i++) {
		if (strstr(source->strings[i], substr) != NULL) {
			printf("%s\n", source->strings[i]);
		}
	}

}
