#include"process.h"
#include<stdio.h>
#include<string.h>

#define NUM 101
#define STYLE '='

void FlushProcess(double total,double current)
{
	char buffer[NUM];
	memset(buffer,0,sizeof(buffer));

	const char* label = "|/-\\";
	int len = strlen(label);

	static int cnt = 0;

	int num = (int)(current * 100 /total);

	for(int i=0; i < num;++i)
	{
		buffer[i] = STYLE;
	}

	double rate = current / total;

	cnt %= len;

	printf("[%-100s][%.1f%%][%c]\r",buffer,rate * 100,label[cnt]);

	cnt++;

	fflush(stdout);
}
