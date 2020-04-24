#include "list.h"

List * take_inputs_and_give_list()
{
  int number;
  List * link_list = create_list();
  do
  {
    printf("Please enter a number: \n");
    scanf("%d",&number);
    if(number!=-99){
      increase_list(link_list,number);
    }
  } while (number!=-99);
  return link_list;
}