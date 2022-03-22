#pragma once
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdint.h>


typedef enum {
	LINKED_LIST_OK, /** <Operation successful.*/
	LINKED_LIST_EMPTY, /** < The list is empty.*/
	LINKED_LIST_FULL, /**< The list is full.*/
	LINKED_LIST_NOT_FOUND, /** < List item not found.*/
	LINKED_LIST_FOUND/** < Item found*/
} linkedList_return_codes_t;

//Abstract Data Type (ADT)
typedef struct linkedList_st* linkedList_t;
typedef struct linkedList_node* linkedList_iterator_t;


linkedList_t linkedList_create(void);

linkedList_return_codes_t linkedList_push(linkedList_t list, void* item);

void* linkedList_peekItemByIndex(linkedList_t list, uint16_t index);

linkedList_return_codes_t linkedList_containsItem(linkedList_t list, void* item);

int linkedlist_length(linkedList_t list);

void linkedList_clear(linkedList_t list);

linkedList_return_codes_t linkedList_removeItem(linkedList_t list, void* item);

linkedList_iterator_t linkedList_getIterator(linkedList_t list);

void* linkedList_iteratorNext(linkedList_t list, linkedList_iterator_t* iterator);
#endif // LINKED_LIST_H

/*
* The items to be stored in the list is given as a void pointer (void *) that points to the element. 
In this way, you can implement a generic linked list that will be able to hold any kind of elements.
The linked list must at least have the contents shown in the class diagram above–except 
for the getIterator and itteratorNext functions.
*/