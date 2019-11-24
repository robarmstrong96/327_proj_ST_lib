/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 23, 2019
 *      Author: kidkyrie
 */

#include "ST_American_DonutEnthusiest.h"
#include "constants.h"

//create with appropriate phrases
ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i) : Smalltalk_American(AMERICAN_DE, i) { this->populatePhrases(); }

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void) {

}

//base class populatePhrases() will be called first as part of its construction
//before this class calls populate phrases as part of its construction
//the end result is mySmallTalk will contain first the base class phrases and
//then this classes phrases
void ST_American_DonutEnthusiest::populatePhrases() {
	Smalltalk_American::populatePhrases();
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	this->mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);
	}


