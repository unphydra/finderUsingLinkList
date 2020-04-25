#include "list.h"

List_ptr take_inputs_and_give_list()
{
  int number;
  List_ptr link_list = create_list();
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

void find_number(List_ptr list)
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

void display_list(List_ptr list)
{
  Node_ptr p_walk = list->first;
  while (p_walk != NULL)
  {
    printf("%d\n",p_walk->value);
    p_walk = p_walk->next;
  }
}

int main(void)
{
  List_ptr link_list = take_inputs_and_give_list();
  // display_list(link_list);
  find_number(link_list);
  return 0;
}