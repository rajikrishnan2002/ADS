#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n,ne=1,cost[50][50],min,mincost,parent[50];
int find(int);
int uni(int,int);
void main()
{
printf("\nImplementation of kruskals algorithm\n");
printf("\nEnter the number of vertices:");
scanf("%d",&n);
printf("\nEnter the cost adajacency matrix:");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&cost[i][j]);
if(cost[i][j]==0)
cost[i][j]=999;
}
}
printf("\nEdges of minimum cost spanning tree are");
while(ne<n)
{
for(i=1,min=999;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(cost[i][j]<min)
{
min=cost[i][j];
a=u=i;
b=v=j;
}
}
}
u=find(u);
v=find(v);
if(uni(u,v))
{
printf("%dedge(%d,%d)=%d\n",ne++,a,b,min);
mincost+=min;
}
cost[a][b]=cost[b][a]=999;
}
printf("\n\t Minimum cost=%d",mincost);
getch();
clrscr();
}
int find(i)
{
while(parent[i])
i=parent[i];
return i;
}
int uni(i,j)
{
if(i!=j)
{
parent[j]=i;
return 1;
}
return 0;
}