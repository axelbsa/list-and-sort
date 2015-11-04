#ifndef __LIST_H__
#define __LIST_H__

#include "common.h"
#include <stdlib.h>

/* List type */
typedef struct list* list_t;

/* Initialize a list with a certain size
 * The list will grow when it gets full.
 *
 * Returns 0 on success and non-zero on failure.
 */
int list_create(list_t* list, size_t initial_size);

/* Find an element in a list
 * Searches for an element with a key equal to key.
 * 
 * Returns 0 if found and sets elem if elem is not NULL.
 * Returns non-zero if not found.
 */
int list_search(list_t list, int key, point_t** elem);

/* Remove an element from a list
 * Searches for an element with a key equal to key.
 *
 * Returns 0 if found and sets elem to the removed element if elem is not NULL.
 * Returns non-zero if no element is found.
 */
int list_remove(list_t list, int key, point_t** elem);

/* Insert an element into a list
 * Inserts an element into a list using key.
 *
 * Returns 0 on success and non-zero on failure.
 */
int list_insert(list_t list, int key, point_t* elem);

/* Delete a list
 * Deletes the list and cleans up the resources.
 * NB! If list is not empty, list_delete() will free all elements.
 *
 * Returns 0 on success and non-zero on failure.
 */
int list_delete(list_t list);

#endif
