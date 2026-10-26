#include"process.h"
#include<stdio.h>
#include<unistd.h>

double total = 1024.0;
double speed = 1.0;

void DownLoad()
{
	double current = 0;

	while(current <= total)
	{
		FlushProcess(total,current);
		usleep(3000);

		current+=speed;
	}
	printf("\ndownload done\n");
}

int main()
{
	DownLoad();

	return 0;
}
