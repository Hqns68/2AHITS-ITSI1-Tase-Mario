#include <stdio.h>

int main(void)
{
  int n = 0;
  int angabe = 0;
  int summ = 0;
  
  printf("\nWie vielen scanf?\n");
  scanf("%d", &n);

  for(int i = 0;i<n;i++)
    {
     scanf("%d", &angabe);
   
     summ += angabe; 
    }
  printf("%d\n", summ);

  
  return 0;
}