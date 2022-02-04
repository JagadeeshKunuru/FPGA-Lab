#include<stdio.h>
#include<stdbool.h>

bool NAND(bool a, bool b, bool c)
{
   return !(a&&b&&c);
}
bool NAND1(bool a, bool b)
{
return !(a&&b);
}
int main()
{
bool a=false,b,c,nand,nand1,nand2;
int i,j;
printf("P Q R NAND\n");
for(i=0;i<=1;i++)
{
    b=false;
    for(j=0;j<=1;j++)
    {
        {
            c=(a&&!b&&!a)||(!a&&!b&&b);
            nand1=NAND(a,!b,!a);
            nand2=NAND(a,!b,b);
            nand=NAND1(nand1,nand2);
            printf("%d %d %d  %d\n",a,b,c,nand);
        }
        b=true;
    }
    a=true;
}
return 0;
}

