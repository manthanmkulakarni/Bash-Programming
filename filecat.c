#include<stdio.h>
#include<dirent.h>
#include<string.h>
int main()
{
DIR *d=opendir(".");
struct dirent *fl=NULL;
FILE *f=NULL,*dst=NULL;

char c;
if(d==NULL)
{
printf("Directory not found\n");
}
else
{
	dst=fopen("appendedfile.txt","w");
	while((fl=readdir(d))!=NULL)
	{	if(strcmp(fl->d_name,"a.out")||strcmp(fl->d_name,".")||strcmp(fl->d_name,".."))
		{
			f=fopen(fl->d_name,"r");
			while((c=getc(f))!=EOF)
			{
				fprintf(dst,"%c",c);
			}
		
			fclose(f);
		}
	}
	fclose(dst);
}
return 0;
}