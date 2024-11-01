#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}
struct Employee
{
    int SSN;
    char name[15];
    int age;
    float salary;
    float commission;
    float deduction;
    float netsalary;
};

int main()
{
    struct Employee employees[3]={0};;
    for (int i = 0; i < 3; i++)
    {
        printf("Please enter data from employee %i",i+1);
        gotoxy(5,5);
        printf("SSN : ");
        gotoxy(55,5);
        printf("Name : ");
        _flushall();
        gotoxy(5,10);
        printf("Age : ");
        gotoxy(55,10);
        printf("Salary : ");
        gotoxy(5,15);
        printf("Commission : ");
        gotoxy(55,15);
        printf("Deduction : ");
        gotoxy(10,5);

        scanf("%i",&employees[i].SSN);
        gotoxy(61,5);
        scanf("%s",employees[i].name);
        gotoxy(10,10);

        scanf("%i",&employees[i].age);
        gotoxy(63,10);

        scanf("%f",&employees[i].salary);
        gotoxy(18,15);

        scanf("%f",&employees[i].commission);
        gotoxy(69,15);

        scanf("%f",&employees[i].deduction);

        system("cls");
        employees[i].netsalary=employees[i].salary+employees[i].commission-employees[i].deduction;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %i",i+1);
        printf("\n----------\n");

        printf("Name      : %s",employees[i].name);
        printf("\n");
        printf("Age       : %i",employees[i].age);
        printf("\n");
        printf("Salary    : %f",employees[i].salary);
        printf("\n");
        printf("Commission: %f",employees[i].commission);
        printf("\n");
        printf("Deduction : %f",employees[i].deduction);
        printf("\n");
        printf("Net salary: %f",employees[i].netsalary);
        printf("\n-------------------------------------------\n");

    }

    return 0;
}
