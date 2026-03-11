#include <stdio.h>
 
int main()
{
int n=0;
int z=0;
int sum=0;
int ret = scanf("%d", &n);
 
  
  scanf("%d",&z);
for(ret != EOF;n++)
  {
    scanf("%d",&n);
    sum+=n;
    if(ret == EOF)
    {   
      printf("EOF erreicht!\n");
      break;
    }
  }
  printf("%d",sum);
  return 0;
}