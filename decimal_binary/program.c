#include <stdio.h>
void main()
{
    long num, decimal_num, remainder, base = 1, binary = 0, no_of_1s = 0;
    printf("Enter a decimal integer \n");
    scanf("%ld", &num);
    decimal_num = num;
    while (num > 0)
    {
        remainder = num % 2;
        /*  To count no.of 1s */
        if (remainder == 1)
        {
            no_of_1s++;
        }
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Input number is = %d\n", decimal_num);hhh
    printf("Its binary equivalent is = %ld\n", binary);
    printf("No.of 1's in the binary number is = %d\n", no_of_1s);
    return 0;
}
The output is 
-------------------------------------------------------
Enter a decimal integer                                                                                                                                                               
5                                                                                                                                                                                     
Input number is = 5                                                                                                                                                                   
Its binary equivalent is = 101                                                                                                                                                        
No.of 1's in the binary number is = 2                                                                                                                                                 
------—----------------------------------------------------