#include <stdio.h>

int main(void){
    int i, arrCount;
    float sum=0;
    float average;
    int score[5];
    
    arrCount = sizeof(score)/sizeof(int);
    
    
    
    
    for(i=1; i<=5; i++){
        printf("Enter the score: ");
        scanf("%d", &score[i]);
        if(score[i]<= 100 && score[i]>=0){
            sum += score[i];
            
            switch(score[i]){
                case 93 ... 100:
                    printf("A\n");
                    break;
                case 90 ... 92:
                    printf("A-\n");
                    break;
                case 87 ... 89:
                    printf("B+\n");
                    break;
                case 83 ... 86:
                    printf("B\n");
                    break;
                case 80 ... 82:
                    printf("B-\n");
                    break;
                case 77 ... 79:
                    printf("C+\n");
                    break;
                case 73 ... 76:
                    printf("C\n");
                    break;
                case 70 ... 72:
                    printf("C-\n");
                    break;
                case 67 ... 69:
                    printf("D+\n");
                    break;
                case 63 ... 66:
                    printf("D\n");
                    break;
                case 60 ... 62:
                    printf("D-\n");
                    break;
                default:
                    printf("F\n");
                    
                    
            }
            average = sum/arrCount;
        
        }
        else{
            i--;
            printf("Invalid Score!!!\n");
            continue;
            
        }
        
    }
    printf("Total Score: %3.0f\tAverage: %3.2f\n", sum,average);
    if (average>90 && average <=100){
        printf("GPA: A\n");
    }else if(average>80 && average<=90) {
        printf("GPA: B\n");
    }else if(average>70 && average<=80){
        printf("GPA: C\n");
    }else if(average>60 && average<=70){
        printf("GPA: D\n");
    }else{
        printf("GPA: F\n");
    }
    
    
    

    
}
