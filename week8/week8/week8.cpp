/******************************************************************************
 * File Name: activity3.cpp
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
	 // instantiates an empty deque for storing int values
	 deque<int> dq1;

	 for (int i = 0; i < 5; i++)
	 {
		 dq1.push_front(i); // add a value to the end of the deque
	 }

	 // print contents of deque (using size() to discover its current size)
	 cout << "------------------- after push_back ------------------" << endl;

	 for (int i = 0; i<dq1.size(); i++)
	 {
		 cout << "element " << i + 1 << " is " << dq1.at(i) << endl;
	 }

	 // remove an element from the start and end of the container
	 dq1.pop_front();
	 dq1.pop_back();

	 // print contents of deque (using size() to discover its current size)
	 cout << "--------------- after pop_front/pop_back --------------" << endl;
	 for (int i = 0; i<dq1.size(); i++)
	 {
		 cout << "element " << i + 1 << " is " << dq1.at(i) << endl;
	 }
	 



	 system("pause");
	
     return 0;
 }

