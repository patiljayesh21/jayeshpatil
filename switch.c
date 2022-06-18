#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,c;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("enter the value of b");
    scanf("%d",&b);
    printf("enter the value of c");
    scanf("%d",&c);
    switch(a+b*c)
    {
        case 16:
        printf("yes iam jayesh patil");
        break;
        case 12:
        printf("yes iam from jalgoan");
        break;
        case 9:
        printf("yes i have completed my graduation from sandip foundation nashik");
        break;
        default:
        printf("yes iam kiran patil");
    }
        printf("currenty iam working in ranjangoan midc");
}