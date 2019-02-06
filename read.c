#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
int main()
{
int fd=open("testfile.txt",O_RDWR);
char *c=(char*)malloc(sizeof(char));
if(fd<0)
{
printf("Error in opening the file\n");
}
else
{

while(read(fd,c,sizeof(char))!=0)
{
printf("%s",c);

}
printf("\n");
}
return 0;
}