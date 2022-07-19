#include<stdio.h>
#include<conio.h>
int main()
{
    int d,m,y;
    printf("Enter the Date,Month&Year this Format DD/MM/YYYY ");
    scanf("%d%d%d",&d,&m,&y);
    if(d<=31 && m<=12 && y<=2022)
        printf("Day-%d ,Month-%d , Year-%d",d,m,y);
    else
        printf("\"Invaild Date\"");
    return 0;
}
