/******************************************************************************
 * File Name: Grading.cpp
 * Program Author: Daniel Hyde
 * Student ID: ********
 * Project Name: Grading
 * Course Code: UFCFK4-30-2
 * Date Created: 3 October 2016
 *
 * Description: This program will ask the user for a score and print a grade in 
 *				response.
 *****************************************************************************/
/* Include section
 * Add all #includes here                                                    */
#include "stdafx.h"
#include <iostream>
/*****************************************************************************/
/* Defines section
 * Add all #defines here                                                     */

/*****************************************************************************/
/* Function prototype section
 * Add all function prototypes here                                          */

/*****************************************************************************/
int main(int argc, char const *argv[]) {

	int mark;

	std::cout << "what score did you receive" << std::endl;
	std::cin >> mark;
	if (mark<0) {
		std::cout << "You can't get bellow 0\%" << std::endl;
	}
	else if (mark <= 59) {
		std::cout << "Your grade is F!!" << std::endl;
	}
	else if (mark <= 69) {
		std::cout << "Your grade is D." << std::endl;
	}
	else if (mark <= 79) {
		std::cout << "Your grade is C." << std::endl;
	}
	else if (mark <= 89) {
		std::cout << "Your grade is B." << std::endl;
	}
	else {
		std::cout << "Well done, you got some brains in there.... Have an A :)" << std::endl;
	}

	return 0;
}
