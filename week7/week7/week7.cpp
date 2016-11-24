/******************************************************************************
* File Name: week7.cpp
* Program Author: D. Wyatt, with debugging by Daniel Hyde
* Student ID: ********
* Project Name: worksheets
* Course Code: UFCFK4-30-2
* Date Created: 22 November 2016
*
* Description: This program is designed as a tool to learn about the tools
*              available for software testing within Visual Studios. The
*              original file is week7_ORIGINAL.cpp, this file is what is
*              produced AFTER debugging has been carried out.
*****************************************************************************/
/* Include section
* Add all #includes here                                                    */
#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;
/*****************************************************************************/
/* Defines section
* Add all #defines here                                                     */

/*****************************************************************************/
/* Function prototype section
* Add all function prototypes here                                          */
void skip(int n);
int factorial(int n);
int combination(int n, int k);
/*****************************************************************************/

/******************************************************************************
 * Function Name      :  skip(int n)
 *    returns         :  void
 *    arg1            :  int n - the number of spaces to skip
 * Created by         :  D. Wyatt, with debugging by Daniel Hyde
 * Date created       :  22 November 2016
 * Description        :  To skip n spaces on a line
 * Notes              :  n should be non-negative
 *****************************************************************************/
void skip(int n)
{
	int i;  /* a counter */
	for (i = 0; i <= n; i++)
		cout << " ";
}

/******************************************************************************
 * Function Name      :  factorial(int n)
 *    returns         :  n factorial
 *    arg1            :  int n - calculate the factorial of n
 * Created by         :  D. Wyatt, with debugging by Daniel Hyde
 * Date created       :  22 November 2016
 * Description        :  To calculate n factorial
 * Notes              :  n must be >= 0. Also if n is too large overflow 
 *                       may result
 *****************************************************************************/
int factorial(int n)
{
	int product = 1;          /* accumulator for the running product */

	for (int i = 1; i <= n; i++)
	{
		product = product * i;
	}
	return(product);
}

/******************************************************************************
 * Function Name      :  int combination(int n, int k)
 *    returns         :  n choose k
 *    arg1            :  int n - the number of items to choose from
 *    arg2            :  int k - the number of items choosen
 * Created by         :  D. Wyatt, with debugging by Daniel Hyde
 * Date created       :  22 November 2016
 * Description        :  To calculate the number of combinations of n 
 *                       things taken k at a time (n choose k)
 * Notes              :  n and k must be non-negative and k <= n. This program
 *                       uses the formula (n choose k) = n! / ( k! * (n-k)! ).
 *****************************************************************************/
int combination(int n, int k)
{
	int comb = factorial(n) / (factorial(k) * factorial(n - k));
	return comb;
}

/*****************************************************************************/
/*********************************  -- MAIN -- *******************************/
/*****************************************************************************/
int main(void)
{
	int nrows;                       /*  the number of rows to print  */
	int n;						     /*  a counter for the current row  */
	int k;                           /*  a counter for the current column  */
	int comb;                        /*  the number of combinations  */
	int spaces_to_skip;              /*  spaces to skip  */

	cout << "Enter the number of rows (<=13) in Pascal's triangle: ";
    cin >> nrows;
	cout << "\n\n\n";
	/*  print the title  */
	skip(16);
	cout << "TABLE 1: THE FIRST " << nrows << " ROWS OF PASCAL'S TRIANGLE\n\n";

	/*  start a loop over the number of rows  */
	spaces_to_skip = 36;

	for (n = 0; n < nrows; n++) {
		skip(spaces_to_skip);       /* space to make a triangle */
		spaces_to_skip = spaces_to_skip - 2;

		for (k = 0; k <= n; k++)
		{
			comb = combination(n, k);
			cout << setw(4) << comb;
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}