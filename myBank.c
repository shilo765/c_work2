#include "myBank.h"
#include <stdio.h>
double bankAcount[2][50];//this array go like this: [bankAmount,status]* num of row
void O(double x){
	int m=0;
	for(int i=0;i<50;i++){
		if(bankAcount[1][i]==0)
		{
			bankAcount[0][i]=x;
			bankAcount[1][i]=1;
			printf(" New account number is: %d",i+901);
			 m=1;
			break;
		}
	}
	if(m==0)
			printf(" we can open more banck accounts we reach the max number");
}
void B(int x){
	if(bankAcount[1][x-901]==1)
	{
		printf(" The balance of account number %d is: %0.2lf",x,bankAcount[0][x-901]);
	}
	else{
		printf(" This account is closed");
	}
}

void D(int x,double amount)
{
	if(bankAcount[1][x-901]==1)
	{
		bankAcount[0][x-901]+=amount;
			printf(" The new balance is: %0.2lf",bankAcount[0][x-901]);
	}
	else{
		printf(" This account is closed");
	}
}
void W(int x,double amount)
{
	if(bankAcount[1][x-901]==1)
	{
		if(bankAcount[0][x-901]>=amount)
		{
			bankAcount[0][x-901]-=amount;
			printf(" The new balance is: %0.2lf",bankAcount[0][x-901]);
		}
		else
			printf(" Cannot withdraw more than the balance");
	}
	else{
		printf(" This account is closed");
	}
}
void C(int x)
{
		if(bankAcount[1][x-901]==1)
	{
		bankAcount[1][x-901]=0;
	}
	else{
		printf(" This account is already closed");
	}
}
void I(double intrest_rate)
{
	for(int i=0;i<50;i++)
	{
		if(bankAcount[1][i]==1)
		{
			bankAcount[0][i]*=(100+intrest_rate)/100;
		}
	}
}
void P()
{
	for(int i=0;i<50;i++)
	{
		if(bankAcount[1][i]==1)
		{
		   printf("The balance of account number %d is: %0.2lf\n",i+901,bankAcount[0][i]);
		}
	}
}


