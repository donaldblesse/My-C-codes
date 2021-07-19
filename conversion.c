#include<stdio.h>
int main()
{
 /*int fahr,cel;
 int lower,upper,step;
 lower=10;
 upper=300;
 step=20.5;
  fahr=lower;
 printf("Fahrenheit      Celsius\n");
 while(fahr<=upper)
 {
     cel=5*(fahr-32)/9;
     printf("%10d\t%7d\n",fahr,cel);
     fahr=fahr+step;9
 }*/
 //this was my own thinking if they did it using while then i can implement mine for
 int f,c,i;
  printf("The table for the conversion is bellow:\n");
  for(f=0;f<300;f+20)//this would condition the number of results we would get
 {
     c=5*(f-32)/9;
     printf("%d\t%d\n",f,c);
    //f=f+20;
 }
}
