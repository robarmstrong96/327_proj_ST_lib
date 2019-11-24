/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 23, 2019
 *      Author: kidkyrie
 */

#include "Smalltalk.h"
#include "constants.h"
#include <cstring>

//derived class will set Nationality, iPerson. iPerson is just a counter used to distinguish between objects of the same type
Smalltalk::Smalltalk(std::string myNationality,int iPerson) : nationality(myNationality) {
	this->iPerson = iPerson;
	this->current_phrase = 0;
}

//cycles through phrases added in populatePhrases. Returns them 1 by 1 starting with the first and ending
//with the last and then it starts over
//takes the form Nationality iPerson: phrase
//for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
//AMERICAN 10:Why yes, I would like to super-size that
std::string Smalltalk::saySomething() {
	return std::string(this->nationality + " " + std::to_string(this->iPerson) + ":" + this->mySmallTalk[this->current_phrase++ % mySmallTalk.size()]);
}

Smalltalk::~Smalltalk(void) { // Deconstructor

}

//returns the time (if pWatch contains a watch ) in the form of THE_CURRENT_TIME_IS: (from the actual watch object itself) and then the time
//or I_DO_NOT_HAVE_A_WATCH string (if pWatch does not contain a watch)
std::string Smalltalk::getTime() {
	if (pWatch.get() == 0) {
		return I_DO_NOT_HAVE_A_WATCH;
	}
	return (THE_CURRENT_TIME_IS + pWatch->getTime());
}

//if this object has a watch it is taken away, otherwise an empty unique_ptr is returned
// This transaction simulates giving away a watch
std::unique_ptr<Watch> Smalltalk::takeWatch() {
	if (this->pWatch != 0) {
		std::unique_ptr<Watch> temp(std::move(pWatch));
		pWatch.release();
		return temp;
	}
	std::unique_ptr<Watch> temp; temp.reset(); return temp;
}

//if already have a watch then return false and don't change pWatch pointer
//otherwise accept watch (return true) and set this->pWatch=pWatch (use std::move)
bool Smalltalk::giveWatch(std::unique_ptr<Watch> &pWatch) {
	if (this->pWatch == 0) {
		this->pWatch = std::move(pWatch);
		pWatch.release();
		return true;
	}
	return false;
}

