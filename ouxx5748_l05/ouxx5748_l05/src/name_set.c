/** @file  name_set.c
 * -------------------------------------
 * @author Zi Feng (Alex) Ou, 169025748, ouxx5748@mylaurier.ca
 *
 * @version 2025-05-04
 *
 * -------------------------------------
 */
#include "name_set.h"

// ==============================================================================================
// Functions

name_set* name_set_initialize() {

	// your code here

	name_set *set = (name_set*) malloc(sizeof(name_set));

	if (set != NULL) {
		set->front = NULL;
		set->rear = NULL;
		set->count = 0;
	}

	return set;
}

int name_set_free(name_set **source) {

	// your code here

	if (source == NULL || *source == NULL)
		return 0;

	name_node *curr = (*source)->front;
	name_node *temp;
	int count = 0;

	while (curr != NULL) {
		temp = curr;
		curr = curr->next;
		free(temp);
		count++;
	}

	free(*source);
	*source = NULL;

	return count + 1;

}

bool name_set_append(name_set *source, const char *first_name,
		const char *last_name) {

	// your code here

	if (source == NULL || first_name == NULL || last_name == NULL)
		return false;

	if (name_set_contains(source, first_name, last_name))
		return false;

	name_node *new_node = (name_node*) malloc(sizeof(name_node));

	if (new_node == NULL)
		return false;

	strncpy(new_node->first_name, first_name, NAME_LEN - 1);
	new_node->first_name[NAME_LEN - 1] = '\0';

	strncpy(new_node->last_name, last_name, NAME_LEN - 1);
	new_node->last_name[NAME_LEN - 1] = '\0';

	new_node->next = NULL;

	if (source->rear == NULL) {
		source->front = new_node;
		source->rear = new_node;
	} else {
		source->rear->next = new_node;
		source->rear = new_node;
	}

	source->count++;
	return true;

}

bool name_set_contains(const name_set *source, const char *first_name,
		const char *last_name) {

	// your code here

	if (source == NULL)
		return false;

	name_node *curr = source->front;

	while (curr != NULL) {
		if (strcmp(curr->first_name, first_name) == 0
				&& strcmp(curr->last_name, last_name) == 0) {
			return true;
		}
		curr = curr->next;
	}

	return false;

}

int name_set_count(const name_set *source) {

	// your code here

	return (source != NULL) ? source->count : 0;

}

void name_set_print(const name_set *source) {
	// Set node to point to the first node in the set.
	name_node *node = source->front;

	// Traverse the set.
	while (node != NULL) {
		printf("%s, %s\n", node->last_name, node->first_name);
		// Update the pointer to the next node.
		node = node->next;
	}
	return;
}
