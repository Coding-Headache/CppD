/******************************************************************************
 * File Name: week4.cpp
 * Program Author: Daniel Hyde
 * Student ID: ********
 * Project Name: week4
 * Course Code: UFCFK4-30-2
 * Date Created: 17 October 2016
 *
 * Description: The project for week 4 is to teach the basics of C++ classes.
 *              The program will build a film "database" to store various 
 *              information on movies, theatres, users and other info.
 *****************************************************************************/
/* Include section
 * Add all #includes here                                                    */

#include "stdafx.h"

#pragma once

#include "registeredUser.h"
#include "theatre.h"
#include "movie.h"
#include "userRating.h"
#include "userComment.h"
#include "userData.h"
/*****************************************************************************/
/* Defines section
 * Add all #defines here                                                     */

/*****************************************************************************/
/* Function prototype section
 * Add all function prototypes here                                          */

/*****************************************************************************/
int main()
{
	// create a new theatre object
	theatre uweTheatre("UWE Frenchay");

	// register a user with the theatre and add some user details
	registeredUser user1 = uweTheatre.newUser("user1@here.com", "password");
	user1.addUserData("user1", "bristol", "1234");

	// add a favourite movie for the user1
	movie fightClub = user1.addMovie("Fight Club", 1999, "An insomniac office worker crosses paths with a devil-may-care soap maker forming an underground fight club", "Drama");

	// add a comment about and a rating for the Fight Club movie
	userComment comment1 = fightClub.addComment("What a cool film with an suprising twist!");
	fightClub.addMovieRating(5);

	// increment the number of times the comment has been read and give it a thumbs up
	comment1.incrementReads();
	comment1.incrementThumbsUp();

	return 0;
}