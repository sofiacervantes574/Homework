/* This program reads input from the terminal, displays characters, */  
/* and sums and prints the digits. Enter a "+" character to         */  
/* indicate EOF (end-of-file).                                      */  
                                                                        
 #define MAXLEN 60               /* The maximum input line size.    */  
                                                                        
 #include <stdio.h>                                                     
 #include <ctype.h>                                                     
                                                                        
 void main(void)                                                        
 {                                                                      
    int  c;                                                             
    int  i = 0, j = 0;                                                  
    int  sum = 0;                                                       
    int  count, cnt;                                                    
    int  num[MAXLEN];            /* An array of digits.             */  
    char letter??(MAXLEN??);     /* An array of characters. Trigraphs   
                                   replace the square brackets.    */   
                                                                        
    while ( ( c = getchar( ) ) != '+' )                                 
    {                                                                   
       if ( isalpha ( c ) )      /* A test for an alphabetic        */  
       {                         /* character.                      */  
           letter[i++] = c;                                             
       }                                                                
       else if ( isdigit ( c ) ) /* A test for a decimal digit.     */  
       {                                                                
           num??(j++??) = c - '0';  /* Trigraphs replace the square     
                                       brackets.                   */   
       }                                                                
    } 
    printf ( "Characters are " );   
    for ( count = 0; count < i; ++count )   
    {                                           
       printf ( "%c", letter[count] );
     }
    printf( "\nSum of Digits is " );          
    for ( cnt = 0; cnt < j; ++cnt )           
    {                                         
        sum += num[cnt];                  
    }                                         
    printf ( "%d\n", sum );                   
 }