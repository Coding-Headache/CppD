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
void sumMod();
void leapYear();
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
		printf("(4)\t-\tSum of N (multiples of 3 or 5)\n");
		//printf("(5)\t-\tTimes Tables\n");
		//printf("(6)\t-\tPrime Numbers\n");
		printf("(7)\t-\tLeap Years\n");
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
		case 4:
			sumMod();
			break;
		case 7:
			leapYear();
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

/******************************************************************************
 * Function Name      :  void greeting()
 *    returns         :  nil
 *    arg1            :  nil
 *    arg2            :  nil
 * Created by         :  Daniel Hyde
 * Date created       :  26 September 2016
 * Description        :  Prints a greeting.
 * Notes              :  nil
 *****************************************************************************/
void greeting()
{
	char name[150];
	printf("What is your name?: ");
	scanf("%s", name);
	printf("Hello %s!\n\n", name);
	return;
}

/******************************************************************************
 * Function Name      :  void sumofn()
 *    returns         :  nil
 *    arg1            :  nil
 *    arg2            :  nil
 * Created by         :  Daniel Hyde
 * Date created       :  26 September 2016
 * Description        :  Asks for a number and calculates the sum of the numbers
 *						 to theat figure
 * Notes              :  nil
 *****************************************************************************/
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

/******************************************************************************
 * Function Name      :  void sumMod()
 *    returns         :  nil
 *    arg1            :  nil
 *    arg2            :  nil
 * Created by         :  Daniel Hyde
 * Date created       :  26 September 2016
 * Description        :  As with sumofn(), however, this will only use multiples
 *						 of 3 and 5.
 * Notes              :  nil
 *****************************************************************************/
void sumMod()
{
	int i = 0, ans = 0;
	int x;

	printf("Enter a number: ");
	scanf("%d", &x);
	for (i = 0; i < x + 1; ++i)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			ans += i;
		}
	}
	printf("\nThe sum  of numbers to %d = %d\n\n", x, ans);
	return;
}

/******************************************************************************
 * Function Name      :  void leapYear()
 *    returns         :  nil
 *    arg1            :  nil
 *    arg2            :  nil
 * Created by         :  Daniel Hyde
 * Date created       :  26 September 2016
 * Description        :  Calculates the leap years in the next 20 years.
 * Notes              :  nil
 *****************************************************************************/
void leapYear()
{
	int year, i;

	printf("What year is it? ");
	scanf("%d", &year);

	for (i = year; i < year + 21; ++i)
	{
		if (i % 4 == 0)
		{
			printf("%d is a leap year \n", i);
		}
	}
	return;
}
