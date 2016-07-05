#include <stdlib.h>
#include <string.h>
#include <check.h>

#include "check_RomanNumeralCalculator.h"
#include "../src/RomanNumeralCalculator.h"

START_TEST (add_ones_digits)
{
	char buffer[30];
	memset(buffer, 0, 30);
	char * expectedResult = "III";
	RomanNumeralCalculator_add("I", "II", buffer);
	ck_assert_str_eq(buffer, expectedResult);
}
END_TEST

TCase * RomanNumeralCalculatorTests()
{
	TCase * tc;
	tc = tcase_create("RomanNumeralCalculatorTests");
	tcase_add_test(tc, add_ones_digits);
	return tc;
}
