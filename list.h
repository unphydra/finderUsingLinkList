#ifndef __list_h_
#define __list_h_
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int value;
  int index;
  struct Node * next;
} Node;

typedef struct 
{
  Node *first;
  Node *Last;
  int count;
} List;

typedef Node * Node_ptr;
typedef List * List_ptr;

Node_ptr create_node(int,int);
List_ptr create_list();
void increase_list(List_ptr,int);
int find_index(List_ptr,int);
#endif
