#include<stdio.h>
int main()
{
    int i, j, maxNum;
    printf("Fiding Prime Numbers!!\n");

    
    do{
        printf("Enter an integer (bigger than 2): ");
        scanf("%d",&maxNum);
        if(maxNum<2){
            printf("Invalid Value\n");
        }
        for(i=2;i<=maxNum;i++)
        {
            for (j = 2; j<=i;j++)
            {
                if (i%j==0) {
                    break;
                }
            }
            if (i==j){
                printf("%d is a Prime Number \n",i);
            }
            
        }

    }
    while (maxNum<2);

    


    

}
