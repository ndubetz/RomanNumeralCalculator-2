#include <stdlib.h>
#include <string.h>

#include <stdio.h>

#include "RomanNumeralCalculator.h"

const char * NUMERALS = "MDCLXVI";

static void map_to_integer_sequence(int * seq, char * numeral)
{
	int i, j;
	for(i = 0; i < strlen(numeral); i++)
	{
		for(j = 0; j < strlen(NUMERALS); j++)
		{
			if(numeral[i] == NUMERALS[j])
			{
				seq[i] = j;
			}
		}
	}
}

static void merge(int * sum, int * seq1, int * seq2, int length1, int length2)
{
	int seqIndex1 = 0, seqIndex2 = 0, sumIndex = 0;
	
	while(seqIndex1 < length1 && seqIndex2 < length2)
	{
		if(seq1[seqIndex1] < seq2[seqIndex2])
		{
			sum[sumIndex++] = seq1[seqIndex1++];
		}
		else
		{
			sum[sumIndex++] = seq2[seqIndex2++];
		}
	}
	
	while(seqIndex1 < length1)
	{
		sum[sumIndex++] = seq1[seqIndex1++];
	}
	
	while(seqIndex2 < length2)
	{
		sum[sumIndex++] = seq2[seqIndex2++];
	}
}

static void map_to_roman_numerals(char * buffer, int * sum, int length)
{
	int i;
	for(i = 0; i < length; i++)
	{
		buffer[i] = NUMERALS[sum[i]];
	}
}

void RomanNumeralCalculator_add(char * buffer, char * numeral1, char * numeral2)
{
	int * seq1 = calloc(strlen(numeral1), sizeof(int));
	int * seq2 = calloc(strlen(numeral2), sizeof(int));
	int * sum  = calloc(strlen(numeral1) + strlen(numeral2), sizeof(int)); 
	
	map_to_integer_sequence(seq1, numeral1);
	map_to_integer_sequence(seq2, numeral2);
	merge(sum, seq1, seq2, strlen(numeral1), strlen(numeral2));
	map_to_roman_numerals(buffer, sum, strlen(numeral1) + strlen(numeral2));

	free(seq1);
	free(seq2);
	free(sum);
}
