#ifndef THEATRE_H
#define THEATRE_H

#include "stdafx.h"
#pragma once

#include <string>
#include <vector>
#include "registeredUser.h"

using namespace std;

class theatre {

private:
	string address;
	vector<registeredUser> users;

public:
	theatre(string address);
	registeredUser newUser(string, string);
};

#endif // !THEATRE_H
