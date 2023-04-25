#include<stdio.h>

int main(){
     int n;
     printf("Enter the number of term\n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
        int c=1;
        for(int j=n;j>0;--j)
        {
            if(i>=j)
            {
                printf("%d\t",c);
                c++;

            }
            else
            {
                printf("\t");
            }
        }
        c--;
        for(int j=1;j<=i;j++)
        {
            c--;
            printf("%d\t",c);
        }
        printf("\n");
     }
return 0;
}
