#include<stdio.h>
int main()
{
    char name[50];
    int Salary;
    float TotalMoney,Bonus;
    printf("Name: ");
    scanf("%s",&name);
    printf("Salary: ");
    scanf("%d",&Salary);
    if(Salary>70000)
    {
        Bonus=(float)1/100*Salary;
        TotalMoney=Salary+Bonus;
    }
    else if(Salary<70000)
    {
        Bonus=(float)3/100*Salary;
        TotalMoney=Salary+Bonus;
    }
    else if(Salary<40000)
    {
        Bonus=(float)5/100*Salary;
        TotalMoney=Salary+Bonus;
    }
    else if(Salary<20000)
    {
        Bonus=(float)7/100*Salary;
        TotalMoney=Salary+Bonus;
    }
    else
    {
        Bonus=(float)10/100*Salary;
        TotalMoney=Salary+Bonus;
    }
    printf("%s\nSalary: %d Bath\nBonus: %.2f Bath\nNewSalary: %.2f Bath\n",name,Salary,Bonus,TotalMoney);
    return 0;
}
