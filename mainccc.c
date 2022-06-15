#include <stdio.h>
#include <stdlib.h>
int a, b=0; 
int fun(int *k)
{ *k += 10; 
 return *k;
}
int main()
{
a = 10; 
b = a + fun(&a); 
printf("%d",a);
printf("With the function call on the right,");  
printf("b is: %d\n", b);
a = 10;
b = fun(&a) + a;
printf("%d",a); 
printf("With the function call on the left, ");  
printf("b is: %d\n", b); 
}

