#include<stdio.h>
#include<conio.h>
struct item
{
	char s;
	int n;
	int g;
}i[10];
main()
{
	int j;
	for(j=0;j<10;j++)
	{
	i[j].s='s';
	i[j].n=j+1;
	}
