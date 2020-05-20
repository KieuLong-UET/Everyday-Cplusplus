#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
	int pid = fork();
	if (pid > 0)
	{
		printf("Tien trinh cha\n");
		printf("ID : %d\n\n",getpid());
	}
	else if (pid == 0)
	{
		printf("Tien trinh con\n");
		printf("ID: %d\n",getpid());
		printf("Cha -ID: %d\n\n",getppid());

		sleep(10);
		printf("\n Tien trinh con \n");
		printf("ID: %d\n",getpid());
		printf("Cha -ID: %d\n",getppid());
	}
	else
	{
		printf("Loi khong tao duoc tien trinh con");
	}
	
	return 0;
}
