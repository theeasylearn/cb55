/*
    0 - 4,00,000 = 0% Tax
    5,00,000 - 10,00,000 = 5% Tax
    11,00,000 - 15,00,000 = 10% Tax 
    16,00,000 - 20,00,000 = 15% Tax
    21,00,000 - 25,00,000 = 20% Tax
    26,00,000 - 30,00,000 = 25% Tax
    30,00,000..... = 30% Tax
*/

#include<stdio.h>

void main()
{
    int basic_salary,gross_salary;
    float tax=0,net_salary;
    printf("Enter Basic salary Of Employee :");
    scanf("%d",&basic_salary);

    gross_salary = basic_salary * 12;
    printf("Gross Salary is :%d\n",gross_salary);
    
    if(gross_salary <= 400000)
    {
        tax = 0;
       
    }
    else if (gross_salary <= 1000000)
    {
        tax = gross_salary * 0.05;
    }
     else if (gross_salary <= 1500000)
    {
        tax = gross_salary * 0.10;
    }
     else if (gross_salary <= 2000000)
    {
        tax = gross_salary * 0.15;
    }
     else if (gross_salary <= 2500000)
    {
        tax = gross_salary * 0.20;
    }
     else if (gross_salary <= 3000000)
    {
        tax = gross_salary * 0.25;
    }
    else
    {
        tax = gross_salary * 0.30;
    }
     printf("Tax is : %.2f\n",tax);
     net_salary = basic_salary + tax;
     printf("net Salary is : %.2f",net_salary);
}

