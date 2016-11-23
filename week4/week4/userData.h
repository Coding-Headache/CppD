#ifndef USERDATA_H
#define USERDATA_H

#include "stdafx.h"
#include <string>
#pragma once

using namespace std;


class userData {

private:
	string name;
	string address;
	string creditCard;

public:
	userData(string name, string address, string creditCard);
};

#endif // !USERDATA_H
