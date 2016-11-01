#ifndef MOVIE_H
#define MOVIE_H

#include "stdafx.h"
#pragma once

#include <string>
#include <vector>
#include "userComment.h"
#include "userRating.h"

using namespace std;

class movie {

private:
	string title;
	int year;
	string desc;
	string genre;
	vector<userRating> rating;
	vector<userComment> comment;

public:
	movie(string title, int year, string desc, string genre);
		
	userRating addMovieRating(int);
	userComment addComment(string);

};

#endif // !MOVIE_H
