#include <iostream>

#include "SMEVector3.h"

//TODO: Add angle for dot product

int main(void)
{
	SME::SMEVector3 vector1(8, 6, 0);
	SME::SMEVector3 vector2(1, 12, 4);

	vector1.normalize();

	return 0;
}