#include<stdio.h>
int main(){

int accno,pass,choice,withdrow,deposite;
printf("ENTER YOUR ACCOUNT NUMBER:-");
scanf("%d",&accno);
printf("ENTER YOUR PASSWARD:-");
scanf("%d",&pass);
if(accno==2004){
	if(pass==2007){
		printf("sucessfully login:\n");
	}else{
		printf("Invalid password...\n");
	}
	}else{
		printf("Invalid account...\n");
	
}
printf("choose the following option..\n");
printf("1. Deposit.\n");
printf("2. Withdraw.\n");
printf("3. Balance .\n");
printf("4.Exit\n");
scanf("%d",&choice);
switch(choice){
	case 1:
		printf("You choose Deposit\n");
		printf("Enter amount:-");
		scanf("%d",&deposite);
		break;
	case 2:
		printf(" you choose Withdraw\n");
		printf("Enter Amount:-");
		scanf("%d",&withdrow);
		break;
	case 3:
	    printf(" you choose Balance\n");	
	    printf("your current balance is 10,000");
	    break;
	case 4:
		printf("You choose Exit\n ");
		printf("Visit again");
		break;

}
	
		 
}
