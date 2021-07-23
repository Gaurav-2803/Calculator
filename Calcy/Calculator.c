#include<stdio.h>  
#include<conio.h>
void main(){  
    int num1,num2;  
    char sign,restart;  
    do{     
        printf("Number 1 : ");  
        scanf("%d",&num1);  
        printf("\nOperator : "); 
        scanf(" %c",&sign);  
        zero:  
            printf("\nNumber 2 : ");  
            scanf("%d",&num2);  
        switch(sign){  
            case'+':  
                printf("\nSum = %d ",num1+num2);  
                break;  
            case'-':  
                printf("\nDifference = %d ",num1-num2);  
                break;  
            case'*':  
                printf("\nProduct = %d ",num1*num2);  
                break;  
            case '%':  
                printf("\nRemainder = %d",num1%num2);   
                break;  
            case'/':  
                while(1){  
                    if(num2==0){  
                        printf("\nNumber 2 Can't Be Zero, Try Again!!!");   
                        goto zero;}  
                    else{
                        break;}
                    }  
                printf("\nQuotient = %.2f ",(float)num1/num2);
                break;  
            default :  
                printf("\nInvalid Operator :/");   
                break;}  
        printf("\n-------------------");  
        printf("\nRestart? : ");
        scanf(" %c",&restart);  
        printf("-------------------\n");  
    }while(restart=='y');  
getch();
} 
