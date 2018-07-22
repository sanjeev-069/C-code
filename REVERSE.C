#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,k=10,temp=0;
	clrscr();
	printf("Enter the no:");
	scanf("%d",&n);
	i=n%k;
	temp=temp+i*10000;
	n=n/k;

	i=n%k;
	temp=temp+i*1000;
	n=n/k;

	i=n%k;
	temp=temp+i*100;
	n=n/k;

	i=n%k;
	temp=temp+i*10;
	n=n/k;
	i=n%k;
	temp+=i;
	printf("result=%d",temp);
	getch();

}