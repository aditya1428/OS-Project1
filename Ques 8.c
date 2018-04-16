#include<stdio.h>
#include<conio.h>
main()
{
int n;
printf("Enter the no. of processes: ");
scanf("%d",&n);
int id[n],bt[n],wt[n],tat[n],p[n],i,j,temp;
for(i=0;i<n;i++)
{
printf("Enter process %d id: ",i+1);
scanf("%d",&id[i]);
printf("Enter process %d burst time: ",i+1);
scanf("%d",&bt[i]);
printf("Enter process %d priority: ",i+1);
scanf("%d",&p[i]);
}
