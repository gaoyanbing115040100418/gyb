#include<iostream.h>
void main()
{
	int n;
	cout<<"pleasec input n:"<<endl; 
	cin>>n;
	if(n<10&&n>0)  
		cout<<":其数值小于10"<<endl; 
	else 
		if(n>=10&&n<=99) 
		cout<<":其数值在10~99"<<endl; 
		else 
			if(n>=100&&n<=999) 
				cout<<":其数值在100~999"<<endl;  
			else 
				if(n>=1000)  
					cout<<":其数值在大于等于1000"<<endl; 
}
