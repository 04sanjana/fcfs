#include<stdio.h>
struct process
{
	int ct,bt,tt,wt,at;
	char name[20];
}p[20],temp;
void main()
{
	int i=0,j=0,k=0,n,time=0,gtime=0;
	float sum_tt=0,sum_wt=0;
	printf("enter number of processes\n");
	scanf("%d",&n);
	printf("Enter details of processes\n");
	for(i=0;i<n;i++)
	{
		printf("ENterprocess name\n");
		scanf("%s",p[i].name);
		printf("Enter process AT\n");
		scanf("%d",&p[i].at);
		printf("Enter process BT\n");
		scanf("%d",&p[i].bt);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[i].at>p[j].at)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	i=0,j=0;
	
	while(i<n)
	{
		if(time>=p[i].at)
		{
			time+=p[i].bt;
			p[i].ct=time;
			p[i].tt=p[i].ct-p[i].at;
			p[i].wt=p[i].tt-p[i].bt;
			sum_tt+=p[i].tt;
			sum_wt+=p[i].wt;
			printf("\n%s\t%d\t%d\t%d\t%d\t%d\n",p[i].name,p[i].at,p[i].bt,p[i].ct,p[i].tt,p[i].wt);
			i++;
			
		}
		else
		{
			time=p[i].at;
		}
	}
	i=0,j=0;
	printf("\nupdated\n");
	printf("pid\tat\tbt\tct\ttt\twt\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%d\n",p[i].name,p[i].at,p[i].bt,p[i].ct,p[i].tt,p[i].wt);
	}
		
	printf("Gantt Chart\n");
	while(k<n)
	{
		if(gtime>=p[i].at)
		{
			printf("|%s\t",p[k].name);
			gtime += p[k].bt;
			k++;
		}
		else
		{
			printf("|idle\t");
			gtime=p[i].at;
			i++;
		}
	}
	printf("|\n|0\t|");
	k=0,gtime=0;
	while(k<n)
	{
		if(gtime>=p[k].at)
		{
			printf("%d\t",p[k].ct);
			gtime+=p[k].bt;
			k++;
		}
		else
		{
			gtime=p[k].at;
			printf("%d\t",gtime);
			
			i++;
			
		
		}
	}
	printf("\nsum tt=%f\n",sum_tt/n);
	printf("sum wt=%f\n",sum_wt/n);
}
	


