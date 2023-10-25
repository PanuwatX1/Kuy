#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    float score[10];
    int i;
    
    printf("\n");
    printf("PROGRAM GRAD\n\n");
    printf("Input error");
    for(i = 0; i < 5; i++)
{
    printf("Enterscore[%d]:" ,i+1);
    scanf("%f" ,&score[i]);
}   
    printf("---------------- Report Gead ----------------\n");
    for( i = 0; i < 5; i++)
{
        if (score[i] > 100)
    {   printf("\nScore[%d] = %.2f , INPUT ERROR \n", i+1,score[i]);}
    else if(score[i] >= 80)
    { printf("\nScore[%d] = %.2f , You Grade : A \n", i+1,score[i]);}
    else
    if(score[i] >= 70)
    { printf("\nScore[%d] = %.2f , You Grade : B \n", i+1,score[i]);}
     else
    if(score[i] >= 60)
    { printf("\nScore[%d] = %.2f , You Grade : C \n", i+1,score[i]);}
     else
    if(score[i] >= 50)
    { printf("\nScore[%d] = %.2f , You Grade : D \n", i+1,score[i]);}
     
    else if (score[i] <50 )
    { printf("\nScore[%d] = %.2f , You Grade : F \n", i+1,score[i]);}
    }
    printf("---------------------------------------------------------\n ");
    getch ();
}