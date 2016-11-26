/******************************************************************************
 * File Name: activity2.cpp
 * Program Author: Daniel Hyde
 * Student ID: ********
 * Project Name: woorksheets
 * Course Code: UFCFK4-30-2
 * Date Created: 25 November 2016
 *
 * Description: Swap the first and last elements of a deque.
 *****************************************************************************/
/* Include section
 * Add all #includes here                                                    */
 #include "stdafx.h"
 #include <deque>
 #include <iostream>

 using namespace std;
/*****************************************************************************/
/* Defines section
 * Add all #defines here                                                     */

/*****************************************************************************/
/* Function prototype section
 * Add all function prototypes here                                          */

/*****************************************************************************/
 int main()
 {
	 int array1[] = {1,2,3,4,5};
     deque<int> intdq(array1, array1+5);

	 // print original deque contents
	 for (int i=0;i<5;i++)
	 {
		 cout << "contents of cell " << i << " is " << intdq.at(i) << endl;
	 }

	 cout << "\n\n";

	 // perform swap of first and last items in deque
	 int temp = intdq.front();
	 intdq.front() = intdq.back();
	 intdq.back() = temp;

	 // print deque AFTER swap.
	 for (int i=0;i<5;i++)
	 {
		 cout << "contents of cell " << i << " is " << intdq.at(i) << endl;
	 }
	 system("pause");
	
     return 0;
 }

