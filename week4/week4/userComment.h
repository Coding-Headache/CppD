#ifndef USERCOMMENT_H
#define USERCOMMENT_H

#include "stdafx.h"
#pragma once

#include <string>

using namespace std;

class userComment {

private:
	string comment;
	int reads;
	int thumbsUp;

public:
	userComment(string comment);

	void incrementReads();
	void incrementThumbsUp();
};

#endif // !USERCOMMENT_H


