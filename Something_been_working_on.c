#include <stdio.h>
//#include <stdlib.h>

int main()
{
    //A function which controls the display menu for the first time
    void displayconsule(){
    printf("Choose any of the options: \n");
    printf("1-Credit transfer. \n");
    printf("2-Air time transactions. \n");
    printf("3-SMS bundle transaction. \n");
    }

    int i;
    printf("Enter your USSD: \n");
    int takennumbers[5];//Takes and stores your ussd
    for (i=0;i<5;i++)
    {
        printf("Enter nummber at position %d: \n" ,i);//Informing which place holder your on.
        scanf("%d",&takennumbers[i]);//stores the ussd
    }


    if(takennumbers[0]==0 && takennumbers[1]==1 && takennumbers[2]==2 && takennumbers[3]==3 &&takennumbers[4]==0)//Compares the ussd and whats in the system
        {
         printf("\n");
         printf("\n");
        displayconsule();//calling the function to display the menu
        }
    else
        {
        printf("You entered wrong USSD. \n");
        }

        int n;
        printf("Enter choice: \n ");//Place holder which takes you to the required sub menu.
        scanf("%d",&n);
        printf("\n");
        printf("\n");

        //Just doing selection between the numbers.
        if (n==1)
        {
            printf("Welcome to the credit transfer section: \n");
        }
        else if(n==2)
        {
           printf("Welcome to the Air time transactions section: \n");
        }
         else if(n==3)
        {
           printf("Welcome to the SMS section: \n");
        }
        else
        {
            printf("##Invalid choise##");//telling you youve messed up
        }


    return 0;
}
