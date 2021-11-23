#include<stdio.h>
int main()
{
char a[80];
int n;
gets(a);
while(a[n]!='\0')
{
	n++;
}
int x;
scanf("%d",&x);
char b[80];
for(int i=0;i<x-1;i++)
{
	b[i]=a[i];
}
for(int j=x-1;j<n;j++)
{
	b[j]=a[j+1];
}
for(int m=0;m<n;m++)
{
	printf("%c",b[m]);
}
return 0;
}
