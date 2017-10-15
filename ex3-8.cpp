#include<iostream.h>
#include<iomanip.h>
void main()
{
	int a,b;
	cout<<"请输入整数a和b"<<endl;
	cin>>a>>b;
	if(a%b==0)
		cout<<a<<"/"<<b<<"="<<a/b<<endl;
	else
		cout<<a<<"/"<<b<<"="<<a/b<<"，该式余数为"<<a%b<<endl;
}