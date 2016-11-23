#include "stdafx.h"
#pragma once

#include <string>
#include <vector>
#include "movie.h"
#include "userRating.h"
#include "userComment.h"

using namespace std;

movie::movie(string movieTitle, int releaseYr, string setDesc, string movieGenre) {
	title = movieTitle;
	year = releaseYr;
	desc = setDesc;
	genre = movieGenre;
}

userRating movie::addMovieRating(int Urating) {
	userRating tmpRating(Urating);
	rating.push_back(tmpRating);

	return tmpRating;
}

userComment movie::addComment(string Ucomment) {
	userComment tmpComment(Ucomment);
	comment.push_back(tmpComment);

	return tmpComment;
}