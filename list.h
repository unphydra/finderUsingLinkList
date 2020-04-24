#ifndef __list_h_
#define __list_h_
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int value;
  struct Node * next;
} Node;

typedef struct 
{
  Node *first;
  Node *Last;
  int count;
} List;

Node * create_node(int);
List * create_list();
void increase_list(List *,int);
void display_list(List *);
#endif
