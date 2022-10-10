#include<stdio.h>  
long fact(int n)  
{  
if(n==0)  
return 1;  
else  
return(n*fact(n-1));  
}  
   
int main()  
{  
int n;  
long f;  
printf("Enter a number:");  
scanf("%d",&n);   
f=fact(n);  
printf("Factorial of %d is %ld\n",n,f);  
return 0;  
}  