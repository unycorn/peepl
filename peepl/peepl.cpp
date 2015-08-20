#include "stdafx.h"

int humans = 0;

struct human{
	bool   gender;
	float  age;
	int    id;
	int    kids;

	void create() {
		gender = rand() % 2;
		age    = 0;
		id     = humans;
		kids   = 0;
	}
};