#include<iostream.h>
#include<iomanip.h>
#include<stdio.h>
#define N 10
void main()
{
	int a[10],i;
	int *p,*q,temp;
	for(i=0;i<10;i++)
		cin>>a[i]>>" ";
	cout<<endl;
	p=q=a;
	for(i=1;i<10;i++)
	{
		if(a[i]>*p)
		{
			*p=a[i];
		}
		else
			if(a[i]<*q)
			{
				*q=a[i];
			}
	}
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<setw(10)<<a[i]<<endl;
}