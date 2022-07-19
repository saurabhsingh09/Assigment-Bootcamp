#include<stdio.h>
#include<conio.h>
int main()
{
    int h,m;
    printf("Enter Time this Format Only 12 Hour HH:MM ");
    scanf("%d%d",&h,&m);
    if(h<=12 && m<=59)
        printf("%d hour and %d Minute",h,m);
    else
        printf("\"Invaild time\" ");
    return 0;
}
