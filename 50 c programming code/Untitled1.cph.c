#include <stdio.h>    
int main ()  
{  
    int a, b, c, d, x;    
    a = 5;  
    b = 7;  
    c = 12;  
    d = 15;  
   
    x = ++a + ++b + ++c + ++d;  
    printf ( " The value of x is: %d ", x);  
    
    printf (" \n The updated value of a = %d, b = %d, c = %d and d = %d ", a, b, c, d);  
    return 0;     
}  
