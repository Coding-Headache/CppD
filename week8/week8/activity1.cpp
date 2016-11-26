/******************************************************************************
 * File Name: activity1.cpp
 * Program Author: Daniel Hyde
 * Student ID: ********
 * Project Name: woorksheets
 * Course Code: UFCFK4-30-2
 * Date Created: 25 November 2016
 *
 * Description: Is it possible to create a deque of deques that will hold ints?
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
     deque<int> intdq(5, 1);
	 deque<deque<int>> dequedq(5, intdq);

	 for (int i = 0; i < 5; i++)
	 {
		 cout << "contents of cell " << i << " are " 
			        << dequedq[i][i] << " using [] access operator" << endl;
	 }

     return 0;
 }

