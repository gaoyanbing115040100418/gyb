#include<iostream.h>
#include <stdio.h>  
#include <string.h>  
void fun(char *p,char *q,char *o,int n)  
{  
	int i,j; 
	    i=j=n;  
 	while(*(p+i-n)!='\0')  
 	{  
 		*(o+i)=*(p+i-n);  
		i++;  
 	}  
	while(*(q+n)!='\0')  
	{  
     	*(o+i)=*(q+j);  
 		i++;j++;  
 	}  
}  
void main()  
 {  
 	char str1[100],str2[100],str3[100],*o,*p,*q;  
 	int n;  
 	cout<<"请输入一个字符串："<<endl;  
 	gets(str1);  
	cout<<"请输入要插入的字符串："<<endl;  
 	gets(str2);  
 	cout<<"请输入在第几位后插入："<<endl;  
	cin>>n;  
 	q=str1;  
	p=str2;  
 	o=str3;  
 	strcpy(o,q);  
 	fun(p,q,o,n);  
 	puts(o);  
 }