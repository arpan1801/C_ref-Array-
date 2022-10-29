/*
Name= Arpan Kumar Bartia
reg no:2041002035
branch : cse
section: e
*/

#include<stdio.h>
int main()
{
int n,i;
float num[50],sum=0.0,avg;
printf("Enter the numbers of elements");
scanf("%d",&n);
	while(n>50 || n<1)
	{
	printf("Error!");
	printf("Enter the numbers of elements again");
	scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
	printf("Enter the number %d:",i+1);
	scanf("%f",&num[i]);
	sum+=num[i];
	}
avg=sum/n;
printf("Average= %.2f",avg);
return(0);
}
