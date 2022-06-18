#include<stdio.h>
#include<conio.h>
int main()
{
    int age,salary,totalsalary;
    printf("\nenter the age");
    scanf("%d",&age);
    printf("\nenter the salary");
    scanf("%d",&salary);
    if(age>50)
    {
      if(salary<60000)
      {
          printf("\nyour age is:%d",age);
          printf("\nyour current salary is:%d",salary);
          totalsalary=salary+10000;
          printf("\nyour salary is increse by 10000,total salary is:%d",totalsalary);
      }
      else
      {
          printf("\nyour age is:%d",age);
          printf("\nyour current salary is:%d",salary);
          totalsalary=salary+5000;
          printf("\nyour salary is increse by 5000,total salary is:%d",totalsalary);
      }
    }  
    else
    {
          printf("\nyour age is:%d",age);
          printf("\nyour current salary is:%d",salary);
          totalsalary=salary+3000;
          printf("\nyour salary is increse by 3000 ,total salary is:%d",totalsalary);
    }
        
          getch();
          return 0;

}