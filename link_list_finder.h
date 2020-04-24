#ifndef __link_list_finder_h_
#define __link_list_finder_h_
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
#endif
