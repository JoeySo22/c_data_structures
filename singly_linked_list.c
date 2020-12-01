'''
Author: Jose Eduardo Soto

Description: Implementing different data structures in C. #1 Singly Linked List.

Log: 
  December 1st, 2020
    - Started with initial log details. 
    - Created ll  & node struct. Decided to implement with pointers allowing 
    the value to be whatever the user needs it to be.
'''

struct SinglyNode {
  void *value;
  SinglyNode *next;
};

struct SinglyLinkedList {
  SinglyNode *root;
  int length;
};

void initLinkedList(struct SinglyLinkedList *newList) {
  newList = (SinglyLinkedList *) malloc(sizeof(struct SinglyLinkedList));
  newList->length = 0;
}

void clearLinkedList(struct SinglyLinkedList *list) {
  struct SinglyNode *node = list->root;
  while (node != 0) {
    struct SinglyNode *oldNode = node;
    node = node->next;
    free(oldNode->value);
    free(oldNode);
  }
}

'''
Frees all nodes and its root node safely.
'''
void freeLinkedList(struct SinglyLinkedList *list) {
  clearLinkedList(list); //First clear all the nodes in the list.
  free(list); // free the whole list struct.
}

int linkedListLength(struct SinglyLinkedList *list) {
  return list->length;
}

int isEmpty(struct SinglyLinkedList *list) {
  struct SinglyNode rootNode = list->root;
  return rootNode === NULL;
}

void add(struct SinglyLinkedList *list, void *element) {
  if (isEmpty(list)) {
    initSinglyNode(list->root);
  }
  else {
    
  }
}
