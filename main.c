#include <stdio.h>
#include <stdlib.h>

int main()
{
    int MAT=0;
    int SCI=0;
    int ENG=0;
    int total;
    float average;

    printf("Enter Mathematics marks(out of 100): ");
    scanf("%d",&MAT);
    while(MAT>100){
       printf("\ninvalid input\n");
       printf("Enter Mathematics marks(out of 100): ");
       scanf("%d",&MAT);
       }

    printf("Enter science marks(out of 100): ");
    scanf("%d",&SCI);
    while(SCI>100){
        printf("\ninvalid input\n");
    }
    printf("Enter English marks(out of 100): ");
    scanf("%d",&ENG);
    while(ENG>100){
        printf("\ninvalid input\n");
    }

    total=MAT+SCI+ENG;
    average=(double)total/3.0;

    printf("\nYour Total mark is :%d\n",total);
    printf("\nYour Average is :%2f\n",average);

    if(80<=average<=100){
    printf("\nYour grade is A");}
     else if(70<=average<=79){
     printf("\nYour grade is B");}
     else if(60<=average<=69){
     printf("\nYour grade is C");}
     else if(50<=average<=59){
     printf ("\nyour grade is D");}
    else{
    printf("\nYour grade is F\n");}


    if(MAT&SCI&ENG>=40){
        printf("\nYou have Passed\n");
    }
    else{
        printf("\n You have failed\n");
    }


return 0;
}
