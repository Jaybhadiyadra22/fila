#include<stdio.h>
main()
{

char email[]="jaybhadiyadra2246@gmail.com";
char password[]="123jay@";
char email1[100];
char password1[100];
printf("enter your email:=");
gets(email1);
printf("enter your password:=");
gets(password1);
if(strcmp(email,email1)==0);
{
	if(strcmp(password,password1)==0);
	{
		printf("login suucessful");
	}
	else
	{
		printf("enter correct password");
	}
}
else
{
	printf("enter correct email and password");
}
}

