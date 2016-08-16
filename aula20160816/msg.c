#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
          int i;
           if (argc==1)
                   printf("bom dia,mundo\n");
           else{
                   if(argc==2)  
                      printf("bom dia,%s!\n", argv[1]);
                   else
                      for(i=0;i<atoi(argv[1]);i++);
                        printf("bom dia,%s!\n", argv[2]);} 
           return 0;
}