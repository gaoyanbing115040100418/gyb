#include<iostream.h>
#include<math.h>
#include<iomanip.h>
void main()
{
float x,y,z,i,j;
cout<<"�����������ε�����"<<endl;
cin>>x>>y>>z;
if (x+y)>z,(x+z)>y,(y+z)>x,(x-y)<z,(x-z)<y,(y-z)<x;
i=0.5*(x+y+z);
j=sqrt(i*(i-x)*(i-y)*(i-z));
cout<<"�������ε������"<<j<<endl;
