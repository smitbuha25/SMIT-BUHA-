#include<stdio.h>

main()
{
	int unit,ele_bill,sr,total_ele_bill;
	printf("Enter ELectricity unit=");
	scanf("%d",& unit);
	if(unit <=50)
	{
		ele_bill=unit*0.50;
	}
	else if (unit <=150)
	{
		ele_bill=(unit-50)*0.75+25;
	}
	else if (unit <=250)
	{
	    ele_bill=(unit<=150)*1.20+25;
    }
}
