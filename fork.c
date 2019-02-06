#include<stdio.h>
#include<unistd.h>

int main()
{
int cpid=fork();

if(cpid==0)
{
printf("Child image is running\n");
}
else
{
wait(NULL);
printf("Parent proces is running\n with child id %d\n",cpid);
}
return 0;
}