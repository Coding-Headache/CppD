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

userRating movie::addMovieRating(int rating) {
	userRating tmpRating(rating);
	ratings.push_back(tmpRating);

	return tmpRating;
}

userComment movie::addComment(string comment) {
	userComment tmpComment(comment);
	comments.push_back(tmpComment);

	return tmpComment;
}