
#include <iostream>
using namespace std;
void bill(string day, int amount);

main()
{
  int  amount;
  string day;
  cout<<"Enter day:";
  cin>>day;
  cout<<"Enter amount:";
  cin>>amount;
  bill(day, amount);
}
  
void bill(string day, int amount)
 {
  float sunday_bill;
  float discount;
if (day!=sunday)
  {
  cout<<"Bill is:"<<amount;
  }
  if (day=="sunday")
  {
  discount=amount*0.1;
  sunday_bill=amount-discount;
  cout<<"Bill is:"<<sunday_bill;
  }
 }
 
  
  

