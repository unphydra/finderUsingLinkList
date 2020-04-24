#include "list.h"

List * take_inputs_and_give_list()
{
  int number;
  List * link_list = create_list();
  while (1)
  {
    printf("Please enter a number: \n");
    scanf("%d",&number);
    if(number==-99){
      break;
    }
      increase_list(link_list,number);
  } ;
  return link_list;
}

int find_index(List * list,int num)
{
  Node * p_walk = list->first;
  int index = -1;
  while (p_walk!=NULL)
  {
    if(p_walk->value == num){
      index = p_walk->index;
      break;
    }
    p_walk = p_walk->next;
  }
  return index;
}

void find_number(List * list)
{
  int number;
  while (1)
  {
    printf("What number would you like to search for?\n");
    scanf("%d",&number);
    if (number==-99)
    {
      break;
    }
    
    int index = find_index(list,number);
    if(index == -1){
      printf("%d is not present in the list\n",number);
    } else
    {
      printf("%d is present in the list at position %d\n",number,index);
    }
  } ;
  
}