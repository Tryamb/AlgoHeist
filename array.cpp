#include<stdio.h>
int main()
{int i,j,x;
for(i=0;i<5;i++)
{
for(j=5;j>i;j--)
{
printf(" ");
}
for(x=0;x<=i;x++)
{
printf("*");
}
printf("\n");
}

return 0;}
