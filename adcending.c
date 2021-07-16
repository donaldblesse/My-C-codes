#include<stdio.h>
main()
{
    int i,j,num,temp;
    printf("enter numbers you want \n");
    scanf("%d",&num);
    int a[num];
    printf("Enter the numbers \n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("the values in acending order is \n");
    for(i=0;i<num;i++)
    {
        printf("%d\n",a[i]);
    }
}
