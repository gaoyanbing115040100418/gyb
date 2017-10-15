#include<iostream.h>
void main()
{
	int i,j;
	cout<<"请输入一个正整数"<<endl;
	cin>>i;
	j=0;
	while(i!=1)
	{
		j++;
			if(i%2==1)
			i=3*i+1;
	else
		    if(i%2!=1)
		    i=0.5*i;
	}
	j=j-1;
	cout<<"该数的角谷猜想步骤数是"<<j<<endl;
}