#include <stdio.h>
#include <stdlib.h>
int main ()
{
 char name[20];
 int a,balance=0,withdraw,deposite;
 printf("Enter name:");
 scanf("%s",&name);
 while(1)
 {
  printf("Enter\n(1)to check balance\n(2) to deposite\n(3) to withdraw\n(4)to exit\n");
  scanf("%d",&a); 
  switch(a)
  { 
  case(1):printf("balance:%d\n",balance);
          break; 
  case(2):printf("enter amount you want to deposite:\n"); 
          scanf("%d",&deposite);
          balance=balance+deposite;
          break;
  case(3):printf("enter withdraw amount:\n"); scanf("%d",&withdraw);
          balance=balance-withdraw;
          break;
  case(4):exit(0);
   }
 }
} 
