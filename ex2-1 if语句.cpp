#include<iostream.h>
void main()
{
	int n;
	cout<<"pleasec input n:"<<endl; 
	cin>>n;
	if(n<10&&n>0)  
		cout<<":����ֵС��10"<<endl; 
	else 
		if(n>=10&&n<=99) 
		cout<<":����ֵ��10~99"<<endl; 
		else 
			if(n>=100&&n<=999) 
				cout<<":����ֵ��100~999"<<endl;  
			else 
				if(n>=1000)  
					cout<<":����ֵ�ڴ��ڵ���1000"<<endl; 
}
