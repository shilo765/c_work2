#ifndef _MYBANK_H_
#define _MYMBANK_H_

float add(float x , float y); //returns x + y
void O(double x);//print the bank account number 
void B(int x);//print the amount of the x account
void D(int x,double amount);// add the amount to the total sum
void W(int x,double amount);// sub the amount to the total sum
void C(int x);//close the bankAcount; 
void I(double intrest_rate);//add intrest to all the accounts
void P();//print all the accounts
#endif