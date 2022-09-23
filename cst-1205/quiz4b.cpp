#include <iostream>
#include "quiz3.h"
#include "quiz4.h"
void quiz4b() {
	bool arr4b[] = { true, false, true, false, false };
	quiz3(arr4b, sizeof(arr4b));
	quiz4(arr4b, sizeof(arr4b), true);
	quiz3(arr4b, sizeof(arr4b));
};