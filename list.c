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

void increase_list(List * list,int value)
{
  Node * new_node = create_node(value);
  if(list->first == NULL){
    list->first = new_node;
  } else
  {
    list->Last->next = new_node;
  }
  list->Last = new_node;
  list->count++;
}

void display_list(List * list)
{
  Node * p_walk = list->first;
  while (p_walk != NULL)
  {
    printf("%d\n",p_walk->value);
    p_walk = p_walk->next;
  }
}
