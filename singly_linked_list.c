'''
Author: Jose Eduardo Soto

Description: Implementing different data structures in C. #1 Singly Linked List.

Log: 
  December 1st, 2020
    - Started with initial log details. 
    - Created ll  & node struct. Decided to implement with pointers allowing 
    the value to be whatever the user needs it to be.
'''

#include <stdlib.h>
#include <assert.h>

struct SinglyNode {
  void *value;
  SinglyNode *next;
};

struct SinglyLinkedList {
  SinglyNode *root;
  SinglyNode *last;
  int length;
};

void resetList(struct SinglyLinkedList *list) {
  list->length = 0;
  list->root = NULL;
  list->last = root;
}

struct SinglyLinkedList *initList() {
  newList = (SinglyLinkedList *) malloc(sizeof(struct SinglyLinkedList));
  resetList(newList);
}

void clearList(struct SinglyLinkedList *list) {
  struct SinglyNode *node = list->root;
  while (node != 0) {
    struct SinglyNode *oldNode = node;
    node = node->next;
    free(oldNode->value);
    free(oldNode);
  }
  resetLinkedList(list);
}

'''
Frees all nodes and its root node safely.
'''
void freeList(struct SinglyLinkedList *list) {
  clearLinkedList(list); //First clear all the nodes in the list.
  free(list); // free the whole list struct.
}

int length(struct SinglyLinkedList *list) {
  return list->length;
}

int isEmpty(struct SinglyLinkedList *list) {
  assert(list->length == 0);
  assert(list->last == list->root);
  return list->root == NULL;
}

void addTo(struct SinglyLinkedList *list, void *element) {
  if (list != 0) { // Make sure the list isn't a null pointer.
    struct SinglyNode *newNode = (struct SinglyNode *) malloc(sizeof(struct SinglyNode));
    if (isEmpty(list)) {
      list->root = newNode;
      list->root->value = element;
    }
    else {
      // Go to the last of the list and add it there.
      list->last->next = newNode;
      list->last->next->value = element;
      list->length++;
      list->last = list->last->next;
    }
  }
}

'''
I can use a contains if the user gives a pointer to a function that
has the semantics to see if two types are similiar.
'''

int contains(struct SinglyLinkedList *list, void *element,
		       int (*equals_algo)(void*, void*)) {
  struct SinglyNode currentNode = list->root;
  while (currentNode != 0) {
    if (currentNode->value // how do I use the function pointer?
  }
}

void remove(struct SinglyLinkedList *list, void *element,
	    int (*equals_algo)(void*, void*)) {
  
}

void *pop(struct SinglyLinkedList *list, void *element,
	  int (*equals_algo)(void*, void*)) {
  
}
