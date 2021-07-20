#include<stdio.h>
main()
{
    long nw;
    nw=0;
    //while(getchar()!='$')
        //putchar(c);
       // ++nw;
       for(nw=0;getchar()!='$';nw++)
       {
        printf("%d\n",nw);
       }
}
