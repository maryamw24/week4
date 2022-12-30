#include <iostream>
using namespace std;
void type(int number);

main()
{
 int number;
 while(true)
 {
 cout<<"Enter number:"<<endl;
 cin>>number,
 type(number);
 }
}

void type(int number) 
 {
 if (number%2 == 0)
  {
   cout<<"Even number"<<endl;
  }
 if (number%2 !=0)
  {
   cout<<"Odd"<<endl;
  }
 }