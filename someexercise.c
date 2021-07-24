#include<stdio.h>
main()
{
    int sal,y;
    float salm,salf;
    char c;

    printf("Enter salary: \n ");
    scanf("%d", &sal);
    printf("Enter gender: \n ");
    scanf("%d", &y);

     c=getchar();
     putchar('c\n');

    if(c=='m')
    {
    printf("You are a male: \n ");
    salm = (0.05)*(sal)+sal;
    printf("Your new salary is %f\n", salm);
    }
    else if(c=='f')
    {
    printf("You are a female: \n ");
    salf= (0.1)*sal+sal;
    printf("Your salary is %f\n" , salf);


    }
    return 0;

}
