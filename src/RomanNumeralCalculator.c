#include <stdlib.h>
#include <string.h>

#include "RomanNumeralCalculator.h"

void RomanNumeralCalculator_add(char * numeral1, char * numeral2, char * buffer)
{
	strcat(buffer, numeral1);
	strcat(buffer, numeral2);
}
