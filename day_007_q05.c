/*
Name= Arpan Kumar Bartia
reg no:2041002035
branch : cse
section: e
*/

#include<stdio.h>
#include<math.h>
int main()
{
float co2,p;
int temp,ivol,fvol,volInc;
printf("Please enter at the promptsthe number of molesof carbon dioxide, the absolute temperature,the initial volume in milimeters,the final volume,and the incrementvolume between linesof the table.\n");
printf("quantity of carbon dioxide(moles)>");
scanf("%f",&co2);
printf("Temperature(Kelvin)>");
scanf("%d",&temp);
printf("initial volume(millimeters)>");
scanf("%d",&ivol);
printf("final volume(milimeters)>");
scanf("%d",&fvol);
printf("volume increment(milimeters)>");
scanf("%d",&volInc);

printf("\n %.4f moles of carbon dioxide at %d kelvin \n\n",co2,temp);
printf("volume(ml) \t Pressure(atm)\n\n");
	for (int i=ivol;i<=fvol;i+=volInc)
	{
	float nRT=(co2*0.08206*temp);
	float Vbn=i-(0.0427*co2);
	float anV=(3.592*(pow(co2,2)))/pow(i,2);
	p=((nRT/Vbn)-anV)*1000;
		printf("    %d\t       %.4f\n",i,p);
	}
return(0);
}
