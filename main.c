#include "list.h"

int main(void)
{
  List * a = create_list();
  printf("%d",a->count);
  return 0;
}