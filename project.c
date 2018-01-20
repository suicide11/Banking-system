#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define acc 100
struct customer
{
char fname[50];
char lname[50];
long long int dob;
long long int aadhar;
long long int amount;
}
customer[acc];
int main()
{
int y[1000],i=0,j,d,ch,l;
int N,n;
int an;
int z[8],w=0,x,flag=0;
long long int deposit,withdraw;
home:
printf("\twelcome to my bank\n");
printf("Select an option from below\n");
printf("1-->Banking customer record\n");
printf("2-->transaction portal\n");
scanf("%d",&N);
switch(N)
{
case 1:
printf("\n\tBanking Record System\n");
printf("Select one option below\n");
printf("3-->Add record to the file\n");
printf("4-->search record from the file\n");
printf("5-->Update record\n");
printf("6-->Delete record\n");
printf("7-->Quit\n");
scanf("%d",&n);
switch(n)
{
case 3: 
start:
printf("enter account number\n");
scanf("%d",&an);
y[i]=an;
i=i+1;
printf("enter customer's first name\n");
scanf("%s",customer[an].fname);
printf("enter customer last name\n");
scanf("%s",customer[an].lname);
printf("enter date of birth(ddmmyyyy)");
scanf("%lld",&customer[an].dob);
printf("enter aadhar number");
scanf("%lld",&customer[an].aadhar);
printf("enter balance amount\n");
scanf("%lld",&customer[an].amount);
printf("\t record added successfully\n");
goto home;
break;
case 4:
printf("Enter the account number\n");
scanf("%d",&an);
for(j=0;j<i;j++)
{
if(y[j]==an)
flag=1;
}
if(flag==1)
{
x=customer[an].dob;
while(x>0)
{
d=x%10;
z[w]=d;
x=x/10;
w++;
}
w=0;
printf("name-%s %s\n",customer[an].fname,customer[an].lname);
printf("date of birth-%d%d-%d%d-%d%d%d%d\n",z[7],z[6],z[5],z[4],z[3],z[2],z[1],z[0]);
printf("aadhar number-%lld\n",customer[an].aadhar);
printf("balance amount-%lld\n",customer[an].amount);
flag=0;
goto home;
}
else
printf("record not found");
goto home;
break;
case 5:
goto start;
break;
case 6:
printf("enter account number");
scanf("%d",&an);
for(l=0;l<50;l++)
{
customer[an].fname[l]= '\0';
customer[an].lname[l]= '\0';
}
customer[an].dob=0;
customer[an].aadhar=0;
customer[an].amount=0;
for(j=0;j<i;j++)
{
if(y[j]==an)
{
y[j]='\0';
}
}
goto home;
break;
case 7:
goto home;
break;
default:
printf("wrong choice\n");
goto home;
break;
}
case 2:
printf("enter your choice\n");
printf("8-->to deposite money\n");
printf("9-->to withdraw money\n");
printf("10-->go to home\n");
scanf("%d",&ch);
switch(ch)
{
case 8:
printf("enter the account nnumber");
scanf("%d",&an);
printf("enter the amount to be deposited");
scanf("%lld",&deposit);
printf("name of the account holder %s %s\n",customer[an].fname,customer[an].lname);
printf("aadhar number of the account holder %lld\n",customer[an].aadhar);
x=customer[an].dob;
while(x>0)
{
d=x%10;
z[w]=d;
x=x/10;
w++;
}
printf("date of birth-%d%d-%d%d-%d%d%d%d\n",z[7],z[6],z[5],z[4],z[3],z[2],z[1],z[0]);
printf("balance of the account holder%lld\n",(customer[an].amount+deposit));
customer[an].amount=customer[an].amount+deposit;
goto home;
break;
case 9:
printf("enter the account number");
scanf("%d",&an);
printf("enter the amount to be withdrawn");
scanf("%lld",&withdraw);
printf("name of the account holder %s %s\n",customer[an].fname,customer[an].lname);
printf("aadhar number of the account holder %lld\n",customer[an].aadhar);
x=customer[an].dob;
while(x>0)
{
d=x%10;
z[w]=d;
x=x/10;
w++;
}
printf("date of birth-%d%d-%d%d-%d%d%d%d\n",z[7],z[6],z[5],z[4],z[3],z[2],z[1],z[0]);
printf("balance of the account holder %lld\n",customer[an].amount-withdraw);
customer[an].amount=customer[an].amount-withdraw;
goto home;
break;
case 10:
goto home;
break;
default: 
printf("wrong choice");
goto home;
}
goto home;
break;
default:
printf("wrong choice");
goto home;
break;
}
return 0;
}





