#ifndef REGISTEREDUSER_H
#define REGISTEREDUSER_H

#include "stdafx.h"
#pragma once

#include <string>
#include <vector>
#include "movie.h"
#include "userData.h"

using namespace std;

class registeredUser {

private:
	string email;
	string password;
	vector<userData> userDatas;
	vector<movie> movies;

public:
	registeredUser(string email, string password);
	movie addMovie(string, int, string, string);
	userData addUserData(string, string, string);
};

#endif // !REGISTEREDUSER_H