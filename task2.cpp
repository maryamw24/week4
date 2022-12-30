#include <iostream>
using namespace std;

void showResult(int marks);

main()
{
  int marks;
  while(true)
  {
  cout << "Enter your marks:";
  cin >> marks;
  showResult(marks);
  cout<<endl;
  }
}

void showResult(int marks)
{
  if (marks>50)
 { 
  cout<<"Pass";
 }
  if (marks==50)
 {
cout<<"Just pass";
 }
if (marks<50)
 {
cout<<"Fail";
 }
}
  