/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 23, 2019
 *      Author: kidkyrie
 */

#include "Smalltalk_American.h"
#include "constants.h"

Smalltalk_American::Smalltalk_American(int iPerson) : Smalltalk(AMERICAN, iPerson) { this->populatePhrases(); }

Smalltalk_American::Smalltalk_American(std::string myNationality,int iPerson) : Smalltalk(myNationality, iPerson) {
}

Smalltalk_American::~Smalltalk_American(void) { }

void Smalltalk_American::populatePhrases() {
	this->mySmallTalk.push_back(AMERICAN_PHRASE_1);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_2);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_3);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_4);
	this->mySmallTalk.push_back(AMERICAN_PHRASE_5);
}


