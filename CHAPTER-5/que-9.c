#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int c=n;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",c);
            
        }
        c--;
        printf("\n");
    }
    
return 0;
}
