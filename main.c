#include "list.h"

int main(void)
{
  List_ptr link_list = take_inputs_and_give_list();
  // display_list(link_list);
  find_number(link_list);
  return 0;
}