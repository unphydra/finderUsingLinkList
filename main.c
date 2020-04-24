#include "list.h"

int main(void)
{
  Node * new = create_node(5);
  printf("%d",new->value);
  return 0;
}