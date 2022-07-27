#include<stdio.h>

int Addition ( int a , int b )
{
    return a + b ;
}

int Subtraction ( int a , int b )
{
    return a - b ;
}

// int Multiplication ( int a , int b )
// {
//     return a * b ;
// }

// float Division ( int a , int b )
// {
//     float result = a * 1.0/ b ;
//     return result ;
// }

int main()
{
    printf ("Enter the operation that you want to perform \n");
    printf ("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.EXit\n ");
    int n ;
    scanf("%d" , &n );
    if ( n < 1 || n > 5  ){
        printf ( "Invalid Input\n");
        return 0 ;
    }
    else if ( n == 1 ){
        printf ("Enter the numbers you want to add \n");
        int a , b ;
        scanf ( "%d %d" , &a , &b );
        int result = Addition ( a , b );
        printf ("Sum of %d and %d is %d\n" ,a , b , result  );
    }
    else if (  n == 2 ){
        printf ("Enter the numbers you want to subtract\n");
        int a , b ;
        scanf ( "%d %d" , &a , &b );
        int result  = Subtraction ( a , b );
        printf ("%d minus %d is %d\n" ,a , b , result  );
    }
    // else if ( n == 3 ){
    //     printf ("Enter the numbers you want to multiply\n");
    //     int a , b ;
    //     scanf ( "%d %d" , &a , &b );
    //     int result = Multiplication ( a , b );
    //     printf ("%d multiplied by %d is %d\n" ,a , b , result  );
    // }
    // else if ( n == 4 ){
    //     printf ("Enter the numbers you want to divide\n");
    //     int a , b ;
    //     scanf ( "%d %d" , &a , &b );
    //     float  result = Division ( a , b );
    //     printf ("%d divided by %d is %f\n" ,a , b , result  );
    // }
    else if ( n == 5 ){
        printf ("NO operation is performed\nThanks for using C calculator");
        return 0 ;
    }
    return 0;
}