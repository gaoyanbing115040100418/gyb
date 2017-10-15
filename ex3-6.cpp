#include<iostream.h>
#include<iomanip.h>
void main()
{
	float r,l,s,pi;
	int k;
	cout<<"please input k"<<endl;
	cin>>r;
	pi=3.14159;
	s=pi*r*r;
	l=2*pi*r; 
	if(k==1)     
     cout<<setiosflags(ios::fixed)<<setprecision(4)<<"s="<<setw(8)<<s<<endl;
	else
		if(k==2)
		      cout<<setiosflags(ios::fixed)<<setprecision(4)<<"1="<<setw(8)<<l<<endl;
		else
			if(k==3)
				 cout<<setiosflags(ios::fixed)<<setprecision(4)<<"s="<<setw(8)<<s<<endl;
			cout<<setiosflags(ios::fixed)<<setprecision(4)<<"1="<<setw(8)<<l<<endl;
}