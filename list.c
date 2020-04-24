#include "list.h"

Node_ptr create_node(int value, int index)
{
  Node_ptr new_node = malloc(sizeof(Node));
  new_node->value = value;
  new_node->index = index;
  new_node->next = NULL;
  return new_node;
}

List_ptr create_list()
{
  List_ptr new_list =malloc(sizeof(List));
  new_list->first = NULL;
  new_list->Last = NULL;
  new_list->count = 0;
  return new_list;
}

void increase_list(List_ptr list,int value)
{
  Node_ptr new_node = create_node(value,list->count);
  if(list->first == NULL){
    list->first = new_node;
  } else
  {
    list->Last->next = new_node;
  }
  list->Last = new_node;
  list->count++;
}

void display_list(List_ptr list)
{
  Node_ptr p_walk = list->first;
  while (p_walk != NULL)
  {
    printf("%d\n",p_walk->value);
    p_walk = p_walk->next;
  }
}
