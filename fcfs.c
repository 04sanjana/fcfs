#include<stdio.h>
#include<string.h>
struct process
{
    int at,bt,ct,tt,wt;
    char name[10];
}p[10],temp,g[10];
void main()
{
    int i,j,n;
    printf("enter number of processes\n");
    scanf("%d",&n);
    printf("enter process details\n");
    for(i=0;i<n;i++)
    {
        printf("enter name of process\n");
        scanf("%s",&p[i]name);
        printf("Enter arrival time\n");
        scanf("%d",&p[i].at);
        printf("enter burst time\n");
        scanf("%d",&p[i].bt);
    }
    printf("process table before sorting\n");
    printf("--------------------------------------------------------------\n");
    printf("name\tat\tbt\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",p[i].name,p[i].at,p[i].bt);
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
    while(i<n)
    {
        if(time>=p[i].at)
       {
        j=i+1
        while(j<n)
        {
            if(p[i].bt<p[j].bt && time>=p[j].at)
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
            j++;
        }
        time=time+p[i].bt;
        p[i].ct=time;
        p[i].tt=p[i].bt-p[i].at;
        p[i].wt=p[i].wt-p[i].at;
        turn=turn+p[i].tt;
        wait=wait+p[i].wt;
       }
       else
       {
        time=p[i].at;
       }

    }
    printf("aftr sorting\n");
    printf("name\tat\tbt\tct\ttt\twt\n");
    for(i=0;i<n;i++)
    {
        printf("%s%d%d%d%d%d",p[i].name,p[i].at),p[i].bt,p[i].ct,p[i].tt,p[i].wt\n");

    }
    printf("gantt chart\n");
    for(i=0;i<n;i++)
   {
    if(g[i].bt==0)
    {
        printf("idle");

    }
    else
    {
        printf("%s",p[i].name);
    }
   }
   printf("|\n");
   printf("0\t");
    for(i=0;i<n;i++)
    {
        printf("%d\t",g[i].ct);
    }
}


