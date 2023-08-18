#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  //Devolver un 1 en pantalla de la función theone();
  printf("the one is %d\n", theone());
  exit(0);
}
