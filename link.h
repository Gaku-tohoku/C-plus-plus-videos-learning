#ifndef _LINK_H_
#define _LINK_H_

typedef struct node *link;
struct node {
    int item;
    link next;          //struct node *next;
}

void link_init(link *head);
link make_node(int item);
void link_insert(link *head, link up);
link link_search(link *head, int key);
void link_delete(link p);
void link_modify(link p, int key);
void link destroy(link *head);

#endif

