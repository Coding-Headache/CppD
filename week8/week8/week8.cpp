// week8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <deque>
#include <iostream>

using namespace std;


int main()
{
	deque<float> floatdq(5, 1.2f);

	for (int i = 0; i < 5; i++)
	{
		cout << "contents of cell " << i << " are " 
			<< floatdq[i] << " using [] access operator" << endl;
		cout << "contents of cell " << i << " are "
			<< floatdq.at(i) << " using the at() function" << endl;
	}

    return 0;
}

