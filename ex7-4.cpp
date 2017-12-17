#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
#define N 100
void main()
{
	int a[10],i;
	int *p;
	for(i=0;i<10;i++)
		cin>>a[i]>>" ";
	cout<<endl;
	p=a;
   for(i=0;i<10;i++)
   {
	   p++;
   }
		for(i=10;i>0;i--)
		{
			p--;
		  cout<<setw(10)<<p[i]<<endl;
		}
}