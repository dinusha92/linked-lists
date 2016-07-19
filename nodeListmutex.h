#ifndef LINKED_LISTS_NODE_H
#define LINKED_LISTS_NODE_H

typedef struct node_list {
    int value;
    struct node_list* next;
}Node_List;

int Member(int value, Node_List* list_head);
int Insert(int value, Node_List** head_pp);
int Delete(int value, Node_List** head_pp);
void print_list(Node_List *head);
#endif //LINKED_LISTS_NODE_H