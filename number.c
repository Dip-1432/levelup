/*
4.) KAPREKAR NUMBER
A Kaprekar number is a non-negative integer n such that when you square it,
the result can be split into two parts that add up to the original number.
Examples:
45 is a Kaprekar number:
45^2=2025
Split 2025 into 20 (left part) and 25 (right part).
20+25=45, which is the original number.
Another example is 297:
297 is a Kaprekar number:
297^2=88209
Split 88209 into 88 (left part) and 209 (right part).
88+209=297, which is the original number.
*/
#include<stdio.h>
#include<math.h>

int count(int x)    // FUNCTION TO COUNT THE NUMBER OF DIGITS  
{
    int count=0;
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    return count;
}

int number(int n)       //FUNCTION TO CHECK A NUMBER IS kaprekar OR NOT
{
    int left_part=n*n/(int)pow(10,count(n));    
    int right_part=n*n%(int)pow(10,count(n));
    return left_part+right_part==n;
}

int main()
{
    printf("\033[31;1m");  //ansi codes for red color and bold
    int choice;
    printf("Enter your choice:\n1.To check a number is kaprekar or not\n"
            "2.To get all the kaprekar numbers within a specific range\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            printf("\033[33;1m");  //ansi codes for yellow color and bold
            int num;
            printf("Enter a number to check:\n");
            scanf("%d",&num);
            if(number(num))
                printf("%d is kaprekar.",num);
            else
                printf("%d is not kaprekar.",num);
            break;
        case 2:
            printf("\033[36;1m");  //ansi codes for cyan color and bold
            int l_range,u_range;
            printf("Enter the lower range:\n");
            scanf("%d",&l_range);
            printf("Enter the upper range:\n");
            scanf("%d",&u_range);
            int count=0;
            printf("All kaprekar numbers between %d and %d are: ",l_range,u_range);
            for(int i=l_range;i<=u_range;i++)
            {
                if(number(i))
                {
                    printf("%d,",i);
                    ++count;
                }
            }
            printf("\n\033[32;1mTotal kaprekar numbers: %d",count); //ansi codes for green color and bold
            break;
        default:
            printf("Invalid choice!");
    }
    printf("\033[0m");  //ansi codes for resetting color
    return 0;
}