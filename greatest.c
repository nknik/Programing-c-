#include <stdio.h>

int main()
{ 
  int n,k,nk;
  scanf("%d %d %d",&n,&k,&nk);
  printf("%d %d %d\n",n,k,nk);
  n>k?n>nk?printf("%d",n):printf("%d",nk):k>nk?printf("%d",k):printf("%d",nk);
    // type your code here
}