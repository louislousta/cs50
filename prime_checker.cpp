#include <iostream>

char getChar()
{
	std::cout << "Enter a single character: \n";
	char c{};
	std::cin >> c;
	return c;
}

int convert(char c)
{
	return static_cast<int>(c);
	}

int main()
{
	while (true) 
	{
		char c = getChar();
		std::cout << c << " has ASCII value: " << convert(c);
	}
}