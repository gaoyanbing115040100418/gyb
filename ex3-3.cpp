#include<iostream.h>
void main()
{
	int i,j;
	cout<<"请输入一个整数:"<<endl;
	cin>>i;
	if(i%3==0)
		j=1;
	else
		if(i%7==0)
			j=1;
		else
			j=0;
	if(j==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}