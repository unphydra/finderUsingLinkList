#include "list.h"

Node * create_node(int value)
{
  Node * new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
}

List * create_list()
{
  List * new_list =malloc(sizeof(List));
  new_list->first = NULL;
  new_list->Last = NULL;
  new_list->count = 0;
  return new_list;
}


