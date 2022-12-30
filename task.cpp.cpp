#include <iostream>
using namespace std;

void sum(int number1, int number2);
void subtract(int number1, int number2);
void product(int number1, int number2);
void division(int number1, int number2);

main()
{
  int number1;
  int number2; 
  char operation;
 while(true)
 {
  cout<<"Enter first number:";
  cin>>number1;
  cout<<"Enter second number:";
  cin>>number2;
  cout<<"Enter operator(+,-,/,*):";
  cin>>operation;
  if (operation=='+')
  {
  sum(number1, number2);
  }
  if(operation=='-')
  {
  subtract(number1, number2);
  } 
 if(operation=='*')
  {
  product(number1, number2);
  }
 if(operation=='/')
  {
  division(number1, number2);
  }
 }
}



void sum(int number1, int number2)
{
  int sum;
  sum=number1+number2;
  cout<<"sum:"<<sum;
}

void product(int number1, int number2)
{
  int product;
  product=number1*number2;
  cout<<"Product:"<<product;
}
 
void subtract(int number1, int number2)
{
  int subtract;
  subtract=number1-number2;
  cout<<"subtract:"<<subtract;
}

void division(int number1, int number2)
 {
  float division;
  division=number1/number2;
  cout<<"division:"<<division;
}


