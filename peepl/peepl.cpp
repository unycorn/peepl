#include "stdafx.h"

int humans = 0;

struct human{
	bool   gender;
	bool   alive;
	float  age;
	int    id;
	int    kids;

	void create() {
		gender = rand() % 2;
		alive  = true;
		age    = 0;
		id     = humans;
		kids   = 0;

		humans += 1;
	}
	void kill() {
		alive = false;
	}
	void update() {
		age += 1;

		if ( (rand() % 100) < (age*age)/100 ) {
			alive = false;
		}
	}
}; 

