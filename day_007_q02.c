/*
Name= Arpan Kumar Bartia
reg no:2041002035
branch : cse
section: e
*/

#include<stdio.h>
int main()
{
int n=0,i=0,largest1=0,largest2=0,temp=0;
printf("Enter the size of the array\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("the array elements are\n");
for(i=0;i<n;i++)
{
printf("%d \t \n",arr[i]);
}

if(largest1<largest2)
{
temp=largest1;
largest1=largest2;
largest2=temp;
}
for(int i=2;i<n;i++)
{
	if(arr[i]>largest1)
	{
	largest2=largest1;
	largest1=arr[i];
	}
	else if(arr[i]>largest2 && arr[i]!=largest1)
	largest2=arr[i];
}
printf("First largest=%d\n",largest1);
printf("second largest=%d\n",largest2);
return(0);
}
