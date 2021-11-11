#include <iostream>
//build a double mario pyramid of height n
void brick(int n) // prints #
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "#";
	}
}
void space(int n) //prints whitespace
{
	for (int i = n; i > 0; i--)
	{
		std::cout << " ";
	}
}
void level(int n) 
{
	
	for (int i = 0; i <= n; i++)
	{
		space(n-i);  // one less space at the begining of easch level, starts with "height" spaces
		brick(i);   // one extra brick each level
		space(2); // always 2 space in middle
		brick(i);  // another extra brick
		std::cout << '\n';
	}
	
}
int main()
{
	int height{};
	std::cout << "Height: \n";
	std::cin >> height;
	level(height);


}