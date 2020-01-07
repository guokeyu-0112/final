#include <stdio.h>
#include <ctype.h>
int main()
{
    double a,b,c;
    scanf("%lg%lg",&a,&b);
    c=(a+b)*(a+b);
    printf("%.2f\n",c);
    return 0;
}