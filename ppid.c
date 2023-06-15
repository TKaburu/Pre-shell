#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	ppid own_ppid;

	own_ppid = getppid;
	printf("%u\n", own_ppid);

	return (0);
}