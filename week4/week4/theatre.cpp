#include "stdafx.h"
#pragma once

#include "theatre.h"
#include "registeredUser.h"
#include <string>
#include <vector>

using namespace std;

theatre::theatre(string homeAddress) {
	address = homeAddress;
}

registeredUser theatre::newUser(string name, string address) {
	registeredUser tmpUser(name, address);
	users.push_back(tmpUser);

	return tmpUser;
}