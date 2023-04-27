//not as required.

#include<stdio.h>

int main(){
    int n,c=1;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            printf("\t");
        }
        for(int k=1;k<=2*i-1;++k)
        {
            printf("%d\t",c++);
        }
        printf("\n");
    }
return 0;
}
