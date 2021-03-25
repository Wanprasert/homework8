#include<iostream>
using namespace std;
float calAm(float amount, float year);
float am, y, totalam1;
int main()
{
 cout<<"Khoayai Bank Information System **Interest = 3%**" <<endl;
 for(int i = 1; i<=3; i++)
 {
  cout <<"Input Amount "<<i<<": ";
  cin >>am;
  cout <<"Input Year "<<i<<": ";
  cin >>y;
  cout <<"Total your money "<<i<<": "<<calAm(am,y) <<endl;
  cout <<"****************************" <<endl;
 }
 
 cout <<"Total 3 people = "<<totalam1 <<endl;
 return(0);
}

float calAm(float amount, float year)
{
 float totalam = (am*(year*0.03))+am;
 totalam1 += totalam;
 return(totalam);
}