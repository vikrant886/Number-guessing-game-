#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main(){
    int number;
    int input;
    srand(time(0));
    number = rand()%100+1;
    printf("*******************WELCOME TO NUMBER GUESSING GAME*********************\n");
    for(int a=0 ; a<=100 ;a++){
        printf("Enter A Number Between 1 To 100\n");
        scanf("%d",&input );
        if(input>number){
            printf("SMALLER NUMBER PLEASE\n");
        }
        else if(input < number ){
            printf("HIGHER NUMBER PLEASE\n");
        }
        else if (input== number ){
                printf("************HURRAY RIGHT CHOICE****************\n");
                printf("YOUR CHANCES USED ARE : %d",a);
            break;
        }
    }

}