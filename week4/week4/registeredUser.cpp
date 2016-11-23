#include "stdafx.h"
#pragma once

#include <string>
#include <vector>
#include "movie.h"
#include "userData.h"
#include "registeredUser.h"

using namespace std;

registeredUser::registeredUser(string personalEmail, string privatePassword) {
	email = personalEmail;
	password = privatePassword;
}

movie registeredUser::addMovie(string title, int year, string desc, string genre) {
	movie tmpMovie(title, year, desc, genre);
	movies.push_back(tmpMovie);

	return tmpMovie;
}

userData registeredUser::addUserData(string name, string address, string creditCard) {
	userData tmpData(name, address, creditCard);
	userDatas.push_back(tmpData);

	return tmpData;
}
