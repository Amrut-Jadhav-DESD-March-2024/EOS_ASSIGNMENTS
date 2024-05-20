#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
	int ret, pid, num;
	printf("Enter a signal number:\n");
	scanf("%d", &num);
	printf("Enter a pid:\n");
	scanf("%d", &pid);

	ret = kill(pid,num);
	printf("kill= %d",ret);
	return 0;
}	
