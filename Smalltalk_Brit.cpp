/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Nov 23, 2019
 *      Author: kidkyrie
 */
#include "Smalltalk_Brit.h"
#include "constants.h"

Smalltalk_Brit::Smalltalk_Brit(int iPerson) : Smalltalk(BRIT, iPerson) { this->populatePhrases(); }

Smalltalk_Brit::~Smalltalk_Brit(void) {

}

void Smalltalk_Brit::populatePhrases() {
	this->mySmallTalk.push_back(BRIT_1);
	this->mySmallTalk.push_back(BRIT_2);
	this->mySmallTalk.push_back(BRIT_3);
	this->mySmallTalk.push_back(BRIT_4);
	this->mySmallTalk.push_back(BRIT_5);
	this->mySmallTalk.push_back(BRIT_6);
	this->mySmallTalk.push_back(BRIT_7);
}

