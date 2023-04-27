#include<stdio.h>

int main()
{
    int n,x,y;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=5;i++)
    {
        
        if (i % 2 == 0)
        {
            x = 1;
            y = 0;
        }
        else
        {
            x = 0;
            y = 1;
        }
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
                printf("%d",x);
            else
                printf("%d",y);
        }
        printf("\n");
    }
return 0;
}
