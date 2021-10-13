#include <stdio.h>
int main()
{
    int d;
    float bill,p,x,n;

    printf("Please enter number of people per table: \n");
    scanf("%f",&n);
    printf("Enter the price of food: \n");
    scanf("%f",&p);
    printf("Enter the price of discount: \n");
    scanf("%d",&d);
    int discount5()
    {
        x = (0.05)*p;
        bill = (p-x)/n;
        printf("Hey Dear the bill for each person out of %0.1f is [%0.2f]: \n",n,bill);
    }
        int discount10()
    {
        x = (0.1)*p;
        bill = (p-x)/n;
        printf("Hey Dear the bill for each person out of %0.1f is [%0.2f]: \n",n,bill);
    }
        int discount15()
    {
        x = (0.15)*p;
        bill = (p-x)/n;
        printf("Hey Dear the bill for each person out of %0.1f is [%0.2f]: \n",n,bill);
    }
    if(d == 5)
    {
        discount5();
    }
    else if(d == 10)
    {
        discount10();
    }
    else
        {
        discount15();
        }

    return 0;
}
