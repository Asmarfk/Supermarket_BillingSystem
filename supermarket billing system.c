#include<stdio.h>
#include<stdlib.h>
#include<string.h>
float amount(float rate, int quantity, float discount, float vat);
int main()
{
	
	int j, quantity, cash, w = 0;
	long cash_received, newt_amount;
	float rate, discount, vat, t_amount=0, amount1, float_part;
	char itemcode[5], date[20];
	
	
	printf("\t\t\t\t*************************************************\n");
	printf("\t\t\t\t****************   Kandy    *********************\n");
	printf("\t\t\t\t**************     Arpico   *********************\n");
	printf("\t\t\t\t************** Super Centre *********************\n");
	printf("\t\t\t\t*************************************************\n");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf(" \t   AVAILABLE PRODUCTS :\n");
	printf(" \t1. Biscuit @ Rs.100.00\n\t\t@ 25%s discount\t@ 2.5%s VAT\n", "%", "%");
	printf(" \t2. Milk powder @ Rs.1000.00\n\t\t@ 50%s discount\t@ 10.5%s VAT\n", "%", "%");
	printf(" \t3. Fresh Milk @ Rs.450.00\n\t\t@ 30%s discount\t @ 7.25%s VAT\n", "%", "%");
	printf(" \t4. Revello chocolate - Pack Of 10 @ Rs.1000.00\n\t\t@ 20%s discount\t @ 9%s VAT\n", "%", "%");
	printf(" \t5. Fruits bascket  @ Rs.800.00\n\t\t\t\t @ 0.25%s VAT\n", "%");
	printf(" \t6. Noodles  @ Rs.250.00\n\t\t@ 10%s discount\t @ 9.3%s VAT\n", "%", "%");
	printf(" \t7. Milo  @ Rs.100.00\n\t\t@ 2%s discount\t@ 4.5%s VAT\n", "%", "%");
	printf(" \t8. Savoury biscuit @ Rs.100.00\n\t\t@ 4%s discount\t @ 3%s VAT\n", "%", "%");
	printf(" \t9. Milk Pack of 12 @ Rs.810.00\n\t\t@ 12%s discount\t @ 8.75%s VAT\n", "%", "%");
	printf("\t10. Necto 1L @ Rs.250.00\n\t\t@ 18%s discount\t @ 14%s VAT\n", "%", "%");
	printf("\t11. Maggi packet@ Rs.250.00\n\t\t@ 10%s discount\t @ 10%s VAT\n", "%", "%");
	printf("\t12. PineApple@ Rs.300.00\n\t\t@ 20%s discount\t @ 2.4%s VAT\n", "%", "%");
	printf("*****************************************************************************************************************\n");
	printf("DATE:");
	fgets(date, 20, stdin);
	printf("\t\t\tCASH DETAILS -\n");
	printf("*****************************************************************************************************************\n");
	printf("CODE\tPRODCUT \t\t\t\t\t\t\t\t\t\t\tQUANTITY\n");
	printf("\t\tAMOUNT(Rs.)\n");
	printf("*****************************************************************************************************************\n");
	printf("Enter <space> to end input\n");
	
	for(j = 1; j!= 0; j++)
	{
		
		fgets(itemcode, 5, stdin);
		if(strcmp(itemcode, "1\n") == 0)
		{
			printf("\tBiscuit                                  \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 100.00;
			discount = 25;
			vat = 2.5;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "2\n") == 0)
		{
			printf("\tMilk powder                              \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 1000.00;
			discount = 50;
			vat = 10.5;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "3\n") == 0)
		{
			printf("\tFresh Milk                               \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 450.00;
			discount = 30;
			vat = 7.25;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "4\n") == 0)
		{
			printf("\tRevello Chocolates - Pack of 10          \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 1000.00;
			discount = 20;
			vat = 9;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "5\n") == 0)
		{
			printf("\tFruit bascket                            \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 800.00;
			discount = 0;
			vat = 0.25;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "6\n") == 0)
		{
			printf("\tNoodles                                  \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 250.00;
			discount = 10;
			vat = 9.3;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "7\n") == 0)
		{
			printf("\tMilo                                     \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 100.00;
			discount = 2;
			vat = 4.5;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "8\n") == 0)
		{
			printf("\tSavoury biscuit                           \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 100.00;
			discount = 4;
			vat = 3;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "9\n") == 0)
		{
			printf("\tMilk pack - Pack of 12                   \t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 810.00;
			discount = 12;
			vat = 8.75;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, "10\n") == 0)
		{
			printf("\tNecto 1L                              \t\t\t\t\t\t\t\t     ");
			scanf("%d", &quantity);
			getchar();
			rate = 250.00;
			discount = 18;
			vat = 14;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
			
		}
		else if(strcmp(itemcode, "11\n") == 0)
		{
			printf("\tMaggi Packet                         \t\t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 250.00;
			discount = 10;
			vat = 10;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
			else if(strcmp(itemcode, "12\n") == 0)
		{
			printf("\tPine Apple                            \t\t\t\t\t\t\t\t\t ");
			scanf("%d", &quantity);
			getchar();
			rate = 300.00;
			discount = 20;
			vat = 2.4;
			amount1 = amount(rate, quantity, discount, vat);
			printf("\t%0.2f\n", amount1);
			t_amount += amount1;
			w += quantity;
		}
		else if(strcmp(itemcode, " \n") == 0)
		{
			printf("TOTAL AMOUNT :\t%0.2f\n", t_amount);
			printf("************************************************************************************************************\n");
		    j=-1;
		}
		else
		{
			printf("PRODUCT DOES NOT EXIST\n");
		}
	}
	printf("Total number of items sold = %d\n", w);
	printf("BALANCE DUE                = %0.2f\n", t_amount);
	newt_amount = t_amount;
	float_part = t_amount - newt_amount;
	if(float_part > 0.50)
		newt_amount += 1;
	printf("BALANCE DUE AFTER ROUNDING = %ld\n", newt_amount);
	A:
	printf("CASH RECEIVED              = ");
	scanf("%ld", &cash_received);
	if(cash_received < newt_amount)
	{
		printf("Not sufficient. Please provide more money \n");
		goto A;
	}
	printf("CHANGE TO BE RETURNED      = %ld\n", cash_received - newt_amount);
	printf("*******************************************************************************************************************\n");
    printf("*******************************************************************************************************************\n");
	printf("\t\t\tPhone # : 081 234 2133\n");
	printf("\t\t\tE-mail : supercentre.com\n");
	printf("\n\t\t\tWe provide FREE DELIVERY.\n");
	printf("\n\t\t\tNo cash refunds.\n");
	printf("\n\t\t\tFollow our page->Supercentre.kandy\n");
	printf("\n\t\t\tLike us on facebook->Supercentre.kandy\n");
	
	printf("\t\t\t** Thank you for shopping with us **\n");
	printf("*******************************************************************************************************************\n");
	
}
float amount(float p, int q, float r, float s)
{
	float z;
	z = ((p * q) - (p * q * r / 100)) + (((p * q) - (p * q * r / 100)) * s / 100);
	return z;
return 0;
}

