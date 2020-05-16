#include <stdio.h>
#include <stdlib.h>
#define T 1000
#define O 0
#define F 1
#include <string.h>
#include "employees.h"




void salaryExceed(employee list[], int len)
{
    int i;
    float average;

    average = salariesAverage(list,len);

    for(i=0;i<len;i++)
    {
       if(list[i].isEmpty == O)
       {
            if(list[i].salary > average)
            {
                printOneEmployee(list[i]);
            }
       }
    }
}



int salariesAverage(employee list[], int len)
{
    int i;
    int cont=0;
    float acc=0;
    int result;


    for(i=0;i<len;i++)
    {
        if(list[i].isEmpty == O)
        {
            cont++;
        }
    }
    acc = salaries(list, len);

   result = acc / cont;

    return result;
}





float salaries(employee list[], int len)
{
    int i;
    float acc=0;

    for(i=0;i<len;i++)
    {
        if(list[i].isEmpty == O)
        {
            acc = list[i].salary + acc;
        }
    }

    return acc;
}


















void modifyEmployee(employee list[], int len, int id)
{
    int i;
    char ans;


    for(i=0;i<len;i++)
    {
        if(list[i].isEmpty == O && id == list[i].id)
        {

            printf("Which option do you want to modify?");
            printf("\n 1_Name \n 2_Last name \n 3_salary \n 4_Sector \n");
            fflush(stdin);
            scanf("%c", &ans);
            do
            {


            switch(ans)
            {

            case '1':
                    printf("\nName: ");
                    fflush(stdin);
                    gets(list[i].name);
                break;
            case '2':
                    printf("\nLast Name: ");
                    fflush(stdin);
                    gets(list[i].lastName);
                break;
            case '3':
                    printf("\nSalary: ");
                    fflush(stdin);
                    scanf("%f", &list[i].salary);
                break;
            case '4':
                    printf("\nSector: ");
                    fflush(stdin);
                    scanf("%d", &list[i].sector);
                break;
            case '5':

                break;
            default:
                    printf("\nThe option doesnt exist!\n");
                break;

            }

            printf("do you wish to continue?");
            scanf("%c", &ans);

          }while(ans=='y');
        }
    }



    printf("\n The modify was succesfully \n");

}



void orderEmployees(employee list[], int len, int order)
{
   int i;
   int j;
   employee auxEmployee;



   if(order==1)
   {

   for(i=0; i<len-1; i++)
   {
       for(j=i+1; j<len; j++)
       {
           if(list[i].sector == list[j].sector)
           {

               if(strcmp(list[i].lastName, list[j].lastName)>0)
               {
                    auxEmployee = list[i];
                    list[i] = list[j];
                    list[j] = auxEmployee;
               }

           }
       }
   }

   }


   if(order==2)
   {


   for(i=0; i<len-1; i++)
   {
       for(j=i+1; j<len; j++)
       {
           if(list[i].sector == list[j].sector)
           {

               if(strcmp(list[i].lastName, list[j].lastName)>0)
               {
                    auxEmployee = list[i];
                    list[i] = list[j];
                    list[j] = auxEmployee;
               }

           }

       }
   }

   }

}

int removeEmployee(employee list[], int len, int id)
{
     int i;
     int idOfEmployee=findEmployeeById(list,len,id);

        for(i=0;i<len;i++)
        {
           if(list[i].id == id && idOfEmployee == id && list[i].isEmpty==O)
           {
               printOneEmployee(list[i]);
               list[i].isEmpty=F;

                printf("\n\n The remove was succesfully \n");
               break;
           }

        }

    if(list[i].id != id)
    {
        printf("\nWe cannot find this ID");
    }







   return -1;



}

int findEmployeeById(employee list[], int len, int id)
{
    int i;
    int returnValue;

        for(i=0;i<len;i++)
        {
           if(list[i].id == id)
           {
               returnValue=list[i].id;
               break;
           }
           else
           {
              returnValue=F;
           }

        }


   return returnValue;
}

int menu()
{

    char menu;



    printf("\n \n \t \t **WELCOME TO THE MENU**\n\n");
    printf("which operation do you want to do?\n\n");
    printf(" 1_Add a new employee \n 2_Edit an existing employee \n 3_Remove employee \n 4_Show all employees \n 5_ Exit  ");
    fflush(stdin);
    scanf("%c",&menu);



    return menu;
}

void printAllEmployees(employee list[], int len)
{
    int i;

    for(i=0; i<len; i++)
    {
        printOneEmployee(list[i]);
    }


}

void printOneEmployee(employee someEmployee)
{
    if(someEmployee.isEmpty == O)
    {


    printf("\n %d %s %s %2.f %d \n\n",someEmployee.id ,
                                    someEmployee.name,
                                    someEmployee.lastName,
                                    someEmployee.salary,
                                    someEmployee.sector);
    }

}


void chargeListOfEmployees(employee list[], int len)
{
    char ans;
    int i;


 do
{

       for(i=0;i<len;i++)
       {

            if(list[i].isEmpty==F)
            {
                   system("cls");
                  list[i]=addEmployee();
                  list[i].id=100+i;
                  list[i].isEmpty=O;
                  printf("\n do you want to contiue charging employees? ");
                  fflush(stdin);
                  scanf("%c",&ans);
                   system("cls");

                    break;


            }
                system("cls");
       }
        if(searchSpace(list,len)==O)
        {
            printf("\nThere is no more space! \n \n");
            break;
        }

}while(ans!='n');


}

employee addEmployee(void)
{
  employee someEmployee;




    printf("\n \n \t **LOAD EMPLOYEES** \n \n");

    printf("\n Enter your name: ");
    fflush(stdin);
    gets(someEmployee.name);

    printf("\n Enter your last name: ");
    fflush(stdin);
    gets(someEmployee.lastName);


    printf("\n Enter your salary: ");
    fflush(stdin);
    scanf("%f", &someEmployee.salary);


    printf("\n Enter your sector: ");
    fflush(stdin);
    scanf("%d", &someEmployee.sector);



    return someEmployee;

}

int searchSpace(employee list[], int len)
{
    int i;
    int auxEmployee;

    for(i=0;i<len;i++)
    {

        if(list[i].isEmpty==F)
        {
           auxEmployee = i;
           break;
        }

    }
    if(list[i].isEmpty==O)
    {
      auxEmployee=0;
    }

    return auxEmployee;
}


void initEmployees(employee list[], int len)
{
  int i;

  for(i=0; i<len; i++)
  {
    list[i].salary = 0;
    list[i].id=0;
    list[i].isEmpty = F;

  }
}
