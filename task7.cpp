#include <iostream>
using namespace std;
void larger(int number1, int number2);

main()
{
 int number1;
 int number2;
 while(true)
 {
 cout<<"Enter first number:";
 cin>>number1;
 cout<<"Enter second number:";
 cin>>number2;
 larger(number1, number2);
 }
}

void larger(int number1, int number2)
{
  if (number1 > number2)
 {
  cout<<"larger number is:"<<number1<<endl;
 }
  if (number2 > number1)
 {
  cout<<"larger number is:"<<number2<<endl;
 }
}

  

 