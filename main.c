#include <stdio.h>
#include "myBank.c"
int main()
{
char operator='m';
double amount;
double intrest_rate;
int acoount;
while(operator!='E')
{
	scanf(" %c", &operator);
	printf("dragonBallZ");
	printf("Please choose a transaction type:\nO-Open Account\nB-Balance Inquiry\nD-Deposit\nW-Withdrawal\nC-Close Account\nI-Interest\nP-Print\nE-Exit\n");
	switch(operator)
	{
	case 'O':
		printf("Please enter amount for deposit:");
		if(scanf(" %lf",&amount)==1)
		{
			if(amount>=0)
			{
				O(amount);
			}
			else
			{printf(" Failed to read the account number");}
		}
		else
		{printf(" Failed to read the account number");}
		break;
	case 'B':
		printf("Please enter account number:");
		if(scanf(" %d",&acoount)!=1)
		{printf(" Failed to read the account number");}
		if(acoount>900&&acoount<951)
		{B(acoount);}
		else
		{
			printf(" Invalid account number");
		}
		break;
		case 'D':
		if(scanf(" %d",&acoount)!=1)
		{printf(" Failed to read the account number");}
		if(acoount>900&&acoount<951)
		{
			printf(" Please enter the amount to deposit:");
			if(scanf("%lf",&amount)==1.0)
			{D(acoount,amount);}
			else
			{printf(" Failed to read the amount number");}
		}
		else
		{
			printf(" Invalid account number");
		}
		break;
		case 'W':
		if(scanf(" %d",&acoount)!=1)
		{printf(" Failed to read the account number");}
		if(acoount>900&&acoount<951)
		{
			printf(" Please enter the amount to withdraw:");
			if(scanf("%lf",&amount)==1)
			{W(acoount,amount);}
			else
			{printf(" Failed to read the amount");}
		}
		else
		{
			printf(" Invalid account number");
		}
		break;
		case 'C':
		printf("Please enter account number:");
		if(scanf(" %d",&acoount)!=1)
		{printf(" Failed to read the account number");}
		if(acoount>900&&acoount<951)
		{C(acoount);}
		else
		{
			printf(" Invalid account number");
		}
		break;
		case 'I':
			printf(" Please enter interest rate:");
			if(scanf(" %lf",&intrest_rate)==1)
			{I(intrest_rate);}
			else
			{printf(" Failed to read the interest");}
		break;
		case 'P':
		P();
		break;
		case 'E':
		break;
		default:
		case ' ':
	    break;
		break;
		
	}
	printf("\n\n");
}
}