#include <stdio.h>
#include <string.h>  
void main()
{  
   int custid, conu;
   float chg, surchg=0, gramt, netamt;
   
   // Determine the Costumer ID & Unit/charge
   printf("Input Customer ID : ");
   scanf("%d",&custid);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conu);
   
   //Calculate Unit/Charge
   if (conu >199 )
	chg = 1.50;
   else	if (conu>=250 && conu<400)
		chg = 1.60;
	else if (conu>=450 && conu<600)
			chg = 1.85;
		else if (conu>=600)
			chg = 2.00;
		else
		   chg = 0.00;
			
   // Calculation of Surcharge(surchg)
   gramt = conu*chg;
   if (gramt>400)
	surchg = gramt*10/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
	
   printf("\n[Electricity Bill]\n\n");
   
   printf("Customer ID#                             :%d\n",custid);
   printf("unit Consumed                            :%d\n\n",conu);
   
   //Calculation of total bill of costumer 
   printf("Unit Charges @P. %4.2f  per unit          :₱ %8.2f\n",chg,gramt);
   printf("Surchage Amount                          :₱ %8.2f\n",surchg);
   printf("Total Customer Bill                      :₱ %8.2f\n",netamt);
   
}
