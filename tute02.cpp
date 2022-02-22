/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>


int main()
{
  int etype,otHrs,otRate;
  double salary,netSalary;
  
  std::cout<<"Enter Employee type :";
  std::cin>>etype;

  std::cout<<"Enter Salary :";
  std::cin>>salary;

  std::cout<<"Enter otHrs :";
  std::cin>>otHrs;

  switch (etype)
    {
      case 1:
      otRate=1000;
      break;
    
  case 2:
    otRate=1500;
    break;
    default :
      otRate=1700;
      break;
      }
   

netSalary=salary+(otHrs*otRate);
std::cout<<"Net salary is :"<<netSalary;

  return 0;
  }