#include "std_lib_facilities.h"

void swap_v(int a, int b){
  int temp;
  temp=a;
  a=b;
  b=temp;
}

void swap_r(int &a, int &b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
}

void swap_cr(constr int& a, constr int& b)
{
  int temp=a;
  a=b;
  b=temp;
}
int main()
{
  int x=7;
  int y=9;
  swap_v(x,y)
  cout<<x<<" "<<y<<endl;
  swap_r(x,y)
  cout<<x<<" "<<y<<endl;
  constr int cx = 7;
  const int cy = 9;
  
  swap_cr(cx, cy);
  cout<<cx<<" "<<cy<<endl;
  swap_v(7.7, 9.9);
  
  double dx=7.7;
  double dy=9.9;
  swap_r(dx,dy);
  cout<<dx<<" "<<dz<<endl;
  return 0;
  double dv=9.9;
