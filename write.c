#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	int fd=open("testfile.txt",O_RDWR);
	printf("%d",fd);
	char c='y',*str=(char*)malloc(sizeof(char)*100);

	if(fd<0)
	{
		printf("Error in opening the file\n");
	}
	else
	{
		scanf("%[^\n]",str);
		str=(char*)str;
		write(fd,str,sizeof(str));
		
	}
	close(fd);
	return 0;
}