#include "std_lib_facilities.h"
int ga[10]={1,2,4,8,16,32,64,128,256,512};

void f(int a[], int n)
{
  int la[10];
  for(int i=0;i<10;i++)
      la[i]=ga[i];
  for(int i=0;i<10;i++)
    cout<<la[i]<<" ";
  
  int*p = new int[n];
  for(int i=0; i<10; i++)
      p[i]=a[i];
  cout<<endl;
  for(int i=0; i<10; i++)
      cout<<p[i]<<" ";
  cout<<endl;
  delete[] p;
}

int main()
{
    f(ga, 10);
    int aa[10]={1,2,6,24,120,720,5040,40320,462880,3628800};
    f(aa,10);
return 0;
}
