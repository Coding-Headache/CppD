#include "stdafx.h"
#pragma once

#include "userComment.h"
#include <string>

using namespace std;


userComment::userComment(string usrComment) {
	comment = usrComment;
	reads = 0;
	thumbsUp = 0;
}

void userComment::incrementReads() {
	reads++;
}

void userComment::incrementThumbsUp() {
	thumbsUp++;
}