#include <iostream>
using namespace std;
void printname(string name);

main()
{
 string name;
 while(true)
 {
 cout<<"Enter your name:";
 cin>>name;
 printname(name);
 }
}

void printname(string name)
{
 if (name =="irzam")
  {
  while(true)
   {
  cout<<"name"<<name;
   }
  }
}