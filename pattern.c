/*
      *             *
    * * *         * * *
  * * * * *     * * * * *
* * * * * * * * * * * * * *
  * * * * *     * * * * *
    * * *         * * *
      *             *
*/
#include<stdio.h>
int main()
{
    printf("\033[32;1m");  //ansi codes for green color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for( int i=1;i<n*2;++i)
    {
        int limit=(i<=n)?i:(n*2-i);
        //FOR SPACES
        for(int k=1;k<=n-limit;++k)
        {
            printf("  ");
        }
        //FOR DIAMOND OF ASTERISKS
        for (int j=1;j<=(limit*2-1);++j)
        {
            printf("* ");
        }
        //FOR 2ND SPACES
        for(int k=1;k<=(n-limit)*2;++k)
        {
            printf("  ");
        }
        //FOR 2ND DIAMOND OF ASTERISKS
        for (int j=1;j<=(limit*2-1);++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}