#include<stdio.h>
int main()
{
    int list[]={1,5,5,5,12,12,0,0,0};
    int i,j=i+1;
    int r=0;
    int l0=0,l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,l7=0,l8=0;
    for(i=1;i<9;i++)
    {
       /* if (list[i]==list[j])
        r++;
        j++;
         printf("the repeatitions in each step is %d \n",r);*/
        if (list[0]==list[i])
         {
             l0++;
         }
        if (list[1]==list[i])
         {
             l1++;
         }
        if (list[2]==list[i])
         {
             l2++;
         }
        if (list[3]==list[i])
         {
             l3++;
         }
        if (list[4]==list[i])
         {
             l4++;
         }
        if (list[5]==list[i])
         {
             l5++;
         }
                  if (list[6]==list[i])
         {
             l6++;
         }
                  if (list[7]==list[i])
         {
             l7++;
         }
                  if (list[8]==list[i])
         {
             l8++;
         }
    }
    printf("the repeatitions are [%d][%d][%d][%d][%d][%d][%d][%d][%d] \n",l0,l1,l2,l3,l4,l5,l6,l7,l8);
    return 0;
}
