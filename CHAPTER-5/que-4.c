#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        int n=1;
        for(int k=rows;k>0;k--)
        {
            if(i>k)
            {
                printf("%d\t",n);
                n++;
            }
            else{
                printf("\t");
            }
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d\t",n);
            n++;
        }
        printf("\n");
    }
return 0;
}
