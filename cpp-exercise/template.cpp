#include "iostream"

template <class re>
re getMax(re a, re b)
{
	re max;
	a > b ? max = a : max = b;
	return (max);
}

int main()
{
	std::cout << getMax(5, 5) << std::endl;
	std::cout << getMax(5.5, 5.6) << std::endl;
	std::cout << getMax('a', 'z') << std::endl;
	std::cout << getMax("fener", "bahce") << std::endl;
}