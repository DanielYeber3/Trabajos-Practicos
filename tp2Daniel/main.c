#include <stdio.h>
#include <stdlib.h>
#define T 1000
#define O 0
#define F 1
#include <string.h>
#include "employees.h"





int main()
{
   employee someEmployee[T];
   int ans;
   int returnedTwo;
   int returnedThree;
   int order;
   int flag;
   int i;
   float salariesOfEmployees;
   float averagesOfTheSalaries;



    initEmployees( someEmployee,  T);
    searchSpace( someEmployee,  T);


    do
    {
    ans=menu();



    switch(ans)
    {


    case '1':
         chargeListOfEmployees( someEmployee, T);

        break;
        case '2':
        for(i=0;i<T;i++)
                {
                    if(someEmployee[i].isEmpty == 0)
                    {
                        flag=1;
                    }
                }
                if(flag==1)
                {
                    printf("\n Which is the ID of the employee that you want to modify? ");
                    fflush(stdin);
                    scanf("%d", &returnedTwo);
                    modifyEmployee(someEmployee, T, returnedTwo);
                    break;
                }
                else
                {
                    printf("\n\n you must fill at least one employee!");
                    break;
                }

    case '3':
        for(i=0;i<T;i++)
                {
                    if(someEmployee[i].isEmpty == 0)
                    {
                        flag=1;
                    }
                }
                if(flag==1)
                {
                    printf("\n Which is the ID of the employee that you want to remove?");
                    fflush(stdin);
                    scanf("%d",&returnedThree);
                    removeEmployee(someEmployee, T, returnedThree);
                }
                else
                {
                    printf("\n\n you must fill at least one employee!");
                    break;
                }
    case '4':
        for(i=0;i<T;i++)
                {
                    if(someEmployee[i].isEmpty == 0)
                    {
                        flag=1;
                    }
                }
                if(flag==1)
                {
                    printf("\n In Which order do you want to sort? \n 1_Ascending \n 2_Descending ");
                    fflush(stdin);
                    scanf("%d", &order);
                    orderEmployees(someEmployee, T, order);
                    printAllEmployees( someEmployee,  T);
                    salariesOfEmployees = salaries(someEmployee,T);
                    averagesOfTheSalaries = salariesAverage(someEmployee, T);

                    printf("\nThe sum of all salaries are: %2.f", salariesOfEmployees);
                    printf("\nThe average salary is: %2.f\n",averagesOfTheSalaries);

                    printf("\nThe person who exceeds the average is:\n");
                    printf("\n%2s %12s %13s %12s %12s","ID","LASTNAME","NAME","SALARY","SECTOR\n");
                    salaryExceed(someEmployee, T);
                    printf("\n \n");
                }
                else
                {
                    printf("\n\n you must fill at least one employee!");
                    break;
                }
       case '5':

        break;
    default:
        printf("The option doesnt exist, please enter a number from 1 to 5");
        break;

    }





    }while(ans!='5');
}























