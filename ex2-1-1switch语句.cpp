#include <iostream.h>
void main()
{
	int i,k��
	cin>>i,k=0;
	while (i!=0)
	{
		k++;
		i=i/10;
	}
	switch (k)
	{
		case 0:cout<<"��ֵС��10\n";break;
		case 1:cout<<"��ֵ��10~99\n";break;
		case 2:cout<<"��ֵ��100~999";break;
		case 3:cout<<"��ֵ����1000\n";break;
	}
}
	
