// CH2E6MSeelye.cpp
/*Suppose an employee gets paid every two weeks and earns 2,200 each pay period. In a year, the employee gets paid 26
times. Write a program that defines the following variables:

the program should calculate the employee;s total annyal pay by myltiplyinig the employee;s pay amount by the nymnber 
of pay periods in a year and store the result in the annualPay variable. Display the total annyal pay on the screen*/

#include <iostream>
#include <string>

int main()
{
    int pay = 2'200, prds = 26, annualPay;

    annualPay = pay * prds;

    std::cout << "With " << prds << " pay periods and $" << pay <<
        " per period,an employee makes $" << annualPay << " per year";
}
