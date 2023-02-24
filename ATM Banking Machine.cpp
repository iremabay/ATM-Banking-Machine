#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

void mainMenu() {

	printf("\n(1) Check Balance\n");
	printf("(2) Deposit Money\n");
	printf("(3) Withdraw Money\n");
	printf("(4) Exit\n");
	printf("\nWhat would you like to do?:\n");
	
}

void checkBalance(float balance) {

	balance = 
	printf("\nYour currrent balance: %.2f\n\n", balance);

}

float deposit(float balance) {
	
	float deposit;
	printf("Please enter the amount:\n");
	scanf("%f", &deposit);
	balance += deposit;
	
	printf("\nNew Balance: %.2f\n\n", balance);
	return balance;

}

float withdraw(float balance) {

	float withdraw;
	printf("Please enter the amount:\n");
	scanf("%f", &withdraw);
	if (withdraw > balance)
	{
		printf("You don't have enough money!\n\n");
		checkBalance(balance);
	}
	else
	{
		balance -= withdraw;
		printf("\nNew Balance: %.2f\n\n", balance);
		return balance;
	}

}

void Exit() {

	printf("\nThank you for using the ATM Machine. Have a great day!\n");
	
}


int main()
{
	//The pin is 1234.
	int pin,choice;
	float balance;
	balance = 5000;
	printf("-----------Welcome to ATM Banking Machine-----------\n\n");
	printf("Please enter your pin:\n");
	scanf("%d", &pin);
	
	while (1)
	{
		
		if (pin != 1234)
		{
			printf("\nIncorrect pin!\n");
			break;
		}
		else
		{
			mainMenu();
			scanf("%d", &choice);

			switch (choice)
			{
				case 1:
					checkBalance(balance);
					break;
				case 2:
					balance = deposit(balance);
					break;
				case 3:
					balance = withdraw(balance);
					break;
				case 4:
					Exit();
					break;
			default:
				break;

			}	
			if (choice == 4)
			{
				break;
			}
		}

	}
	return 0;
}