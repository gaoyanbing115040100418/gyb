#include<iostream.h>
void main()
{
	int x,y,prime;
	x=2000,y=0;
	prime=0;
	while(x<=3000)
	{
		cout<<x<<"    ";
		x=x+4;
	    y++;
		prime++;
	    if(y%10==0)
		cout<<endl;
    }
    cout<<endl;
    cout<<"闰年的总年数为"<<y<<endl;
}