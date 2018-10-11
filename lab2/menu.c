#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void echod();

int main()
{
	char cmd[128];

	while(1)
	{

		scanf("%s", cmd);
		if(!strcmp(cmd, "help"))
		{
			printf("This is help cmd!\n");
		}

		else if(!strcmp(cmd, "echodt"))
		{
			echod();
        }

		else if(!strcmp(cmd, "quit"))
		{
			exit(0);
		}
		else
		{
			printf("Wrong cmd!\n");
		}
	}




}
