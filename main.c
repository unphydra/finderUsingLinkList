#include "list.h"

int main(void)
{
  List * a = create_list();
  increase_list(a,5);
  increase_list(a,7);
  increase_list(a,9);
  printf("%d",a->first->value);
  printf("%d",a->Last->value);
  return 0;
}