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
	 // instantiates an deque with 10 int elements each set to 0
	 deque<int> dq2(10, 0);

	 // declares an iterator to a deque of int values and sets its initial value to
	 // the beginning of the new container
	 deque<int>::iterator it = dq2.rend();

	 // iterate through the deque by using an increment operator ++ and check for the
	 // end of the deque by using the end() function
	 for (int i = 1; it != dq2.begin(); --it, i++)
	 {
		 // the * in front of the iterator it dereferences the iterator to
		 // access the value it points to
		 *it = i;
		 // output the value currently pointed to by the iterator
		 cout << "element " << i << " is " << *it << endl;
	 }


	 system("pause");
	
     return 0;
 }

