#include <stdio.h>

int main(int arc, char *argv[])
{
  char x;
  int i;

  for( i = 1; i < arc; i++)
    {
      FILE *f = fopen(("%s",argv[i]),"r");
      while(fscanf(f,"%c",&x)!=EOF)
        printf("%c",x);
      printf("\n");
    }
  
  return 0;
}
