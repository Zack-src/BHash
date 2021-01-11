#include <iostream>

int Tableau(int Text, int pos) {
	int table[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (int i = 0; i < Text; i++) {
		for (int j = 0; j < 10; j++) {
			table[j] = table[j] + (i * (pos + 4));
			
	return table[Text % 10];
}

int BHash(std::string Text) {

	int TextDecimal, Result = 0;

	for (int i = 0; i < Text.length(); i++)
	{
		TextDecimal = (int) Text[i];
		Result += Tableau(TextDecimal, i);
	}
	return Result;
}

int main(int argc, char* argv[])
{
	std::cout << BHash(argv[1]);
	
	return 0;
}
