#include<stdio.h>  
int main()
{  
  int i = 1, n, sum = 0;  
  printf("Enter a number: ");  
  scanf("%d", &n);  
  while(i < n ){  
        if(n % i == 0)  
        sum = sum + i;  
        i++;                         
  }  
  if(sum == n)  
    printf("%d is a Perfect Number",n);  
  else  
    printf("%d is not a Perfect Number",n);  
 return 0;
}
