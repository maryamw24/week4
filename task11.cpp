#include <iostream>
using namespace std;
void bill(string day, int amount);

main()
{
 string day;
 int amount;
 while(true)
 {
 cout<<"Enter day:";
 cin>>day;
 cout<<"Enter amount:";
 cin>>amount;
 bill(day, amount);
 }
}

void bill(string day, int amount)
{
 float discount1, discount2, bill1, bill2;
 if (day=="sunday")
 {
  discount1=amount*0.10;
  bill1=amount-discount1;
  cout<<"Bill is:"<<bill1<<endl;
 }
 if (day== "monday")
 {
  discount2=amount*0.05;
  bill2=amount-discount2;
  cout<<"Bill is:"<<bill2<<endl;
 }
 if (day== "tuesday")
 {
  discount2=amount*0.05;
  bill2=amount-discount2;
  cout<<"Bill is:"<<bill2<<endl;
 }
 if (day== "wednesday")
 {
  discount2=amount*0.05;
  bill2=amount-discount2;
  cout<<"Bill is:"<<bill2<<endl; 
 }
 if (day== "thursday")
 {
  discount2=amount*0.05;
  bill2=amount-discount2;
  cout<<"Bill is:"<<bill2<<endl;
 }
 if (day=="friday")
 {
  discount2=amount*0.05;
  bill2=amount-discount2;
  cout<<"Bill is:"<<bill2<<endl;
 }
 if (day== "saturday")
 {
  discount2=amount*0.05;
  bill2=amount-bill2;
  cout<<"Bill is:"<<bill2<<endl;
 }
}