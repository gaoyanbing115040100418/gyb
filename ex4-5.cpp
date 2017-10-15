#include<iostream.h>
void main()
{
	int x;
	for(x=1;x<10;x++)
	{
	    if(x*x%10==x)
		    cout<<x<<"    ";
	}
	for(x=10;x<100;x++)
	{   
		if(x*x%100==x)
			cout<<x<<"    ";
    }
	cout<<endl;
}