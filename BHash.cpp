#include <iostream>
#include <string>
#include <inttypes.h>

int Tableau(int Text, int pos)
{
	uint64_t table[10] = { 0,1,2,3,4,5,6,7,8,9 }; // array

	for (uint64_t i = 0; i < Text; i++)
		for (uint64_t& j : table)
			for (int t = 0; t < 512; t++)
				j +=  i * (pos + 4);

	return table[Text % 8];
}

uint64_t BHash(std::string Text) {

	uint64_t Result = 0;
	for (int i = 0; i < Text.length(); i++)
		Result += Tableau((int)Text[i], i);

	return Result;
}

int main(int argc, char* argv[])
{
	printf("%" PRIu64 "\n", BHash(argv[1]));

	return 0;
}
