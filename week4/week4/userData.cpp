#include "stdafx.h"
#pragma once

#include "userData.h"
#include <string.h>

using namespace std;

userData::userData(string firstName, string homeAddress, string mainCreditCard) {
	name = firstName;
	address = homeAddress;
	creditCard = mainCreditCard;
}