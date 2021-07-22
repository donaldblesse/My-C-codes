#include<stdio.h>
main()
{
    long c;
    int nw,nl;
    nw=0;
    nl=0;
    while((c=getchar())!='$')
    {
        ++nl;
       if (c==' '||c=='\n')
        {
            ++nw;
        }
    }
     printf("The number of characters is %d\n",nl);
     printf("The number of words is %d\t",nw);
}
