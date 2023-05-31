#include<stdio.h>
#include<string.h>
main()
{
	char username[3];
	char password[3];
	
	printf("Enter the username: ");
	gets(username);
	
	printf("\nEnter the password: ");
	gets(password);
	
	if(strcmp(username,"user") == 0)
	{
		if(strcmp(username,"default") == 0)
		{
			printf("\nuser successully login");
		}else
		{
			printf("\npassword entered is valid");
		}
	}else
	{
		printf("\nusername  entered is valid");
	}
}
