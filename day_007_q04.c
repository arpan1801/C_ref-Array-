/*
Name= Arpan Kumar Bartia
reg no:2041002035
branch : cse
section: e
*/

#include<stdio.h>
int main()
{
int size,i;
char ch;
scanf("%d",&size);
printf("size=%d\n",size);
scanf("%c",&ch);
char correct_ans[size];
for(i=0;i<size;i++)
{
scanf("%c",&correct_ans[i]);
}
printf("\t\t Exam Report\n");
printf("Question\t");
for(i=0;i<size;i++)
	printf(" %d ",i+1);
printf("\n");
printf("Answer\t\t");
for(i=0;i<size;i++)
{
	printf(" %c ",correct_ans[i]);
}
printf("\n");
return(0);
}
