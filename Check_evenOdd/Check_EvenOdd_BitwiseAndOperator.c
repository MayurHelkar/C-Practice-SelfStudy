#include <stdio.h>

int main()
{
    int evenOdd;

    printf("Enter a Number : ");
    scanf("%d", &evenOdd);

//  Bitwise AND operator comparison with RHS
    printf("Bitwise AND operator comparison with RHS ::\n");
    if((unsigned)evenOdd & 1 == 1)
    {
        printf("%d is Odd number\n", evenOdd);
    }
    else
    {
        printf("%d is Even number\n", evenOdd);
    }

    printf("\n");
    
//  Bitwise AND operator comparison with RHS using Ternary operator
    printf("Bitwise AND operator comparison with RHS using Ternary operator ::\n");
    (unsigned)evenOdd & 1 == 1 ? 
    printf("%d is Odd number\n", evenOdd) : 
    printf("%d is Even number\n", evenOdd);

    printf("\n");

//  Bitwise Shift operator comparison with RHS using Ternary operator for Multiple number or range
    printf("Bitwise Shift operator comparison with RHS using Ternary operator for Multiple number or range ::\n");
    int Range;
    printf("Provide a range for checking values : ");
    scanf("%d", &Range);

    int i = 0;
    for(; i <= Range; i++)
    {
        if(i & 1 == 1)
        {
            printf("%d is Odd number\n", i);
        }
        else
        {
            printf("%d is Even number\n", i);
        }
    }
    
    printf("\n");

//  Bitwise Shift operator comparison with RHS using Ternary operator for Multiple number or range with Multiple Inputs using Array
    printf("Bitwise Shift operator comparison with RHS using Ternary operator for Multiple number or range with Multiple Inputs using Array ::\n");
    int inputRange;
    printf("Provide a range for checking values : ");
    scanf("%d", &inputRange);
    
    int intArray[inputRange];
    int j;

    for(j = 0; j < inputRange; j++)
    {
        printf("Enter %d Array Element : ", j);
        scanf("%d", &intArray[j]);
    }

    for(j = 0; j < Range; j++)
    {
        if(intArray[j] & 1 == 1)
        {
            printf("%d is Odd number\n", intArray[j]);
        }
        else
        {
            printf("%d is Even number\n", intArray[j]);
        }
    }

    return 0;
}