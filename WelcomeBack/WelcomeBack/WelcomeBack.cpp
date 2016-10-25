/******************************************************************************
 * File Name: WelcomeBack.cpp
 * Program Author: Daniel Hyde
 * Student ID: ********
 * Project Name: Worksheet1
 * Course Code: UFCFK4-30-2
 * Date Created: 26 September 2016
 *
 * Description: WelcomeBack is a group mix of small programs designed to get us
 *				back into the flow and thought process of programming after the
 *				summer break.
 *****************************************************************************/
/* Include section
 * Add all #includes here                                                    */
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
/*****************************************************************************/
/* Defines section
 * Add all #defines here                                                     */

/*****************************************************************************/
/* Function prototype section
 * Add all function prototypes here                                          */
void greeting();
void sumofn();
/*****************************************************************************/

int main()
{
	char cont = 'y';

	while (1)//(cont != 'n')
	{
		int prog;
		system("cls");

		printf("Welcome Back, please pick a program to run:\n\n");
		printf("(1)\t-\tHello World\n");
		printf("(2)\t-\tGreeting\n");
		printf("(3)\t-\tSum of N\n");
		//printf("(4)\t-\tHello World\n");
		//printf("(1)\t-\tHello World\n");
		//printf("(1)\t-\tHello World\n\n");
		printf("Enter Program Choice: ");
		scanf("%d", &prog);
		
		switch (prog)
		{
		case 1:
			printf("Hello World\n\n");
			break;
		case 2:
			greeting();
			break;
		case 3:
			sumofn();
			break;
		default:
			printf("Incorrect option...");
			break;
		}
		
		//printf("Do you wish to continue? (y or n):\n");
		//scanf("%c", cont);
		return 0;
	}

}

void greeting()
{
	char name[150];
	printf("What is your name?: ");
	scanf("%s", name);
	printf("Hello %s!\n\n", name);
	return;
}

void sumofn()
{
	int i = 0, ans = 0;
	int x;

	printf("Enter a number: ");
	scanf("%d", &x);
	for (i = 0; i<x + 1; ++i)
		ans += i;
	printf("\nThe sum  of numbers to %d = %d\n\n", x, ans);
	return;
}
