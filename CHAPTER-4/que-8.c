#include<stdio.h>

int main(){
    int first_num,n,d,tn,sum=0;
    printf("Input the starting number of the A.P. Series :");
    scanf("%d",&first_num);
    printf("Input the number of items for the A.P. series:");
    scanf("%d",&n);
    printf("Input the common difference of A.P. series:");
    scanf("%d",&d);
    
    tn = first_num;
    printf("SUM OF THE AP SERIES ARE: \n");
    for(int i = 1; i <= n; i++) {
        printf("%d + ", tn);
        sum += tn;
        tn = tn + d;
    }
    
    printf("=%d",sum);
    
return 0;
}
