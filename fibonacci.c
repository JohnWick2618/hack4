#include<stdio.h>    
int main()    
{    
 int n1=-1,n2=1,n3,i,n;    
 printf("Enter the number of elements:");    
 scanf("%d",&n);
 if (n<=0)
printf ("Invalid\n");
 for(i=1;i<=n;++i)
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    
