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

Node * create_node(int,int);
List * create_list();
void increase_list(List *,int);
void display_list(List *);
List * take_inputs_and_give_list();
void find_number(List * );
int find_index(List *,int);
#endif
