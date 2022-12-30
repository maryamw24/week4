#include <iostream>
using namespace std;
void vote(int age);

main()
{
 int age;
 while(true)
 {
 cout<<"Enter your age:";
 cin>>age;
 vote(age);
 }
}

void vote(int age)
 {
  if (age < 18)
  {
  cout<<"You are not elligible to vote."<<endl;
  }
  if (age >= 18)
  {
  cout<<"You are elligible to vote."<<endl;
  }
 }