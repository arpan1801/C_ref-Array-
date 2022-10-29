/*
Name= Arpan Kumar Bartia
reg no:2041002035
branch : cse
section: e
*/

#include<stdio.h>
void insert(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && temp<=a[i])
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
}


void print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
{
printf("%d \t",a[i]);
}
}


int main()
{
int a[]={20,30,50,60,80,95,100};
int n=sizeof(a)/sizeof(a[0]);
printf("before sorting array elements are: \n");
print(a,n);
insert(a,n);
printf("\n after sorting array elements are: \n");
print(a,n);

return(0);
}










