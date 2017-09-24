#include <iostream.h>
void main()
{
	int i,k；
	cin>>i,k=0;
	while (i!=0)
	{
		k++;
		i=i/10;
	}
	switch (k)
	{
		case 0:cout<<"数值小于10\n";break;
		case 1:cout<<"数值在10~99\n";break;
		case 2:cout<<"数值在100~999";break;
		case 3:cout<<"数值大于1000\n";break;
	}
}
	
