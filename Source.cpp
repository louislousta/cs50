#include <iostream>

void brick(int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << "#";
	}
}
void space(int n)
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
		space(n-i);
		brick(i);
		space(2);
		brick(i);
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