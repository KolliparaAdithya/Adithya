#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter the 2 angles of triangle: ");
    scanf("%d%d",&a1, &a2);
    if((a1+a2)<180)
     {
        a3=180-(a1+a2);
        printf("The third angle is :%d",a3);
     }
    else
        printf("Invalid input");

    return 0;
}
