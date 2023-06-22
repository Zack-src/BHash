#include <iostream>
#include <string>
#include <inttypes.h>
#include <unordered_map>
#include <map>

uint64_t Tableau(int letter, int pos)
{
	uint64_t table[512]{};

	for (uint64_t i = 0; i < letter; i++)
		for (uint64_t& j : table)
			for (int t = 0; t < 64; t++)
				j += (i * pos) + 4;

    uint64_t r = 0;
    for (auto& v : table) {
        r += v;
    }

	return r;
}

uint64_t BHash(std::string text) {

	uint64_t result = 0;
	for (int i = 0; i < text.length(); i++)
		result += Tableau((int)text[i], i);

	return result;
}

int main(int argc, char* argv[])
{
	printf("%" PRIu64 "\n", BHash(argv[1]));

	return 0;
}
