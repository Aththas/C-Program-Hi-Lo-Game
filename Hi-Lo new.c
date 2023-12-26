#include<stdio.h>

int main()
{
    int R,I,x,c, choice;
    R = srand()%100+1;
    printf("\n\n                    ----------*****Hi-Lo Game*****----------\n\n");

    printf("Select the difficulty level : \n\n");
    printf(" 1 - Easy    (1-100)\n 2 - Medium  (1-1000)\n 3 - Hard    (1-10 000)\n");
    printf("\n Select a number : ");
    scanf("%d",&choice);

    if(choice==1)
    {
        R = srand()%100+1;
        printf("\n\n Easy Mode(Random number between 1-100)\n\n");
    }
    else if(choice==2)
    {
        R = srand()%1000+1;
        printf("\n\n Medium Mode(Random number between 1-1000)\n\n");
    }
    else if(choice==3)
    {
        R = srand()%10000+1;
        printf("\n\n Hard Mode(Random number between 1-10000)\n\n");
    }

    x=0;
    c=1;
    while(x<1)
    {
        printf("\n Guess the Number : ");
        scanf("%d",&I);
        if(I==R)
        {
            printf("Congratulations. You got the correct Answer with in %d try",c);
            break;
        }
        else if(I<R)
        {
            printf("\n Your Guess is low. Try Again.\n");
            c++;
        }
        else
        {
            printf("\n Your Guess is High. Try Again.\n");
            c++;
        }

    }
    getch();
}
