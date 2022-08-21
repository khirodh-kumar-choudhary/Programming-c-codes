  #include <stdio.h>  
 main()  
{  
     
    int i, j, rows,columns;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);  
	printf (" Enter a number to define the columns: \n");  
    scanf ("%d", &columns); 
    printf("\n");  
      
    for ( i = rows; i >= 1; i--)  
    {  
          
        for ( j = columns; j<=5; j++)  
        {  
            printf ("  "); 
        }  
       
        {  
            printf ("1 2 3 4 5 6 7 8 9 8 7 6 5 4 3 2 1 ");  
        }    
        printf ("\n");  
    }  
    return 0;  
}  
