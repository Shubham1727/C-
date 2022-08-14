#include <stdio.h>
#include <stdlib.h>
struct DOB
{
    int day, month, year;
};
struct ADRS
{
    int house_no;
    long zipcode;
    char state[20];
};
struct EMPLOYEE
{
    char name[20];
    struct DOB dob;
    struct ADRS address;
};
int main()
{
    int N;
    printf("Enter the number of employees: ");
    scanf("%d", &N);
    struct EMPLOYEE emp[N];
    struct EMPLOYEE *ptr = emp;
    for (int i = 1; i <= N; i++)
    {
        printf("Enter the name of Employee %d: ", i);
        scanf("%s", (ptr + i)->name);
    }
    for (int i = 1; i <= N; i++)
    {
printf("Enter DOB of Employee %d in DD/MM/YYYY format: ", i);
scanf("%d%d%d", &(ptr+i)->dob.day, &(ptr+i)->dob.month, &(ptr+i)->dob.year);
    }
    for (int i = 1; i <= N; i++)
    {
printf("Enter address of Employee %d in house_no,zipcode, state format: ", i);
scanf("%d%ld%s", &(ptr+i)->address.house_no,
&(ptr+i)->address.zipcode, (ptr+i)->address.state);
    }
    for (int i = 1; i <= N; i++)
    {
        printf("Name of Employee %d: %s", i, (ptr + i)->name);
        printf("\n");
    }
    for (int i = 1; i <= N; i++)
    {
        printf("DOB of Employee %d in DD/MM/YYYY format: %d/ % d / % d ", i,(ptr+i)->dob.day, (ptr+i)->dob.month, (ptr+i)-> dob.year);
        printf("\n");
    }
    for (int i = 1; i <= N; i++)
    {
        printf("Address of Employee %d in house_no, zipcode,state format: % d % ld % s ", i , (ptr+i)->address.house_no,(ptr + i)->address.zipcode,(ptr + i)->address.state);
        printf("\n");
    }
    return 0;
}
