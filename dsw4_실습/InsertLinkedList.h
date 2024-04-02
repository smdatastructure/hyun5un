#pragma once
typedef struct ListNode{
    char data[4];
    struct Listnode* link;
} listNode;

typedef struct {
    listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void freeLinkedList_h(linkedList_h* L);
void printList(linkedList_h* L);
void printList(linkedList_h* L);
void inserFirstNode(linkedList_h*L, char* x);
void insertMiddleNode(linkedList_h*L, listNode*pre, char* X);
void insertLastNode(linkedList_h*L, char* X);