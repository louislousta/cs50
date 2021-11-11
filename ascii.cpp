#include <iostream>
#include <string>

int main()
{
	std::cout << "PLease enter you name \n";
	std::string name{};
	std::getline(std::cin >> std::ws, name);
	std::cout << "Please enter your age: \n";
	int age{};
	std::cin >> age;
	std::cout << "Sum of name and age = " << static_cast<int>(name.length) + age;

}