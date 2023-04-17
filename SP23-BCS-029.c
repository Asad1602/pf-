#include<stdio.h>
#include<stdlib.h>
/*this program is developed to take input of work hour and work rate of 10 employes at a time
and it will calculate the inividual salary , total salary of 10 employes, average salary of 10 employes*/
int main (){
    // variables declaration 
    int employ_salary,work_hours,rate_per_hour,total_salary = 0,maximum_hours = 0;
    float average_salary;

    // for loop to calculate the salary of 10 employes to take the input 10 times
    for (int i = 1; i <= 10; i++)
    {
        printf("enter the no of working hours :\n ");
        scanf("%d",&work_hours);
        if (maximum_hours < work_hours  )// if condition to evaluate  maximum work hours
        {
            maximum_hours = work_hours;
        }
        
        do// this is do-while to fullfill the range condition of rate per hour 500 - 5000
        {
            printf("enter the rate per hour:\n ");
            scanf("%d",&rate_per_hour);

        } while (rate_per_hour < 500 || rate_per_hour > 5000);// condition

        //formula to calculate employes salary
        employ_salary = work_hours * rate_per_hour;
        printf("the salary of employ no %d is %d\n",i,employ_salary);

        // formula to calculate the total salary
        total_salary += employ_salary; 
       
    }
    // formula to calculate average salary
     average_salary = (float) total_salary / 10;

    /*output of the calculated values */    
    printf("total salary is %d\n",total_salary);
    printf("Average salary is %f\n",average_salary);
    printf("maximum work hour is %d\n",maximum_hours);

    system("pause");
    return 0;

}