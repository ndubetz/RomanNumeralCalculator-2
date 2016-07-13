#include <stdlib.h>
#include <string.h>
#include <check.h>

#include "check_RomanNumeralCalculator.h"
#include "../src/RomanNumeralCalculator.h"

void test_addition(char * numeral1, char * numeral2, char * expectedResult)
{
	char buffer[30];
	memset(buffer, 0, 30);
	RomanNumeralCalculator_add(buffer, numeral1, numeral2);
	ck_assert_str_eq(buffer, expectedResult);
}

START_TEST (add_ones_digits)
{
	test_addition("II", "I", "III");
	test_addition("MII", "CCX", "MCCXII");
	test_addition("MCXI", "MMCCXXII", "MMMCCCXXXIII");
	test_addition("MMCCXXII", "MCXI", "MMMCCCXXXIII");
}
END_TEST

TCase * RomanNumeralCalculatorTests()
{
	TCase * tc;
	tc = tcase_create("RomanNumeralCalculatorTests");
	tcase_add_test(tc, add_ones_digits);
	return tc;
}
