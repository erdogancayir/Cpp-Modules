#include "iter.hpp"

void    print(const int &n)
{
    std::cout << n << " ";
}

void print2(const std::string &s)
{
    std::cout << s + " ";
}

int main()
{
    int array[5] = {0, 1, 9, 0, 7};
    iter(array, 5, print);
    std::cout << std::endl;
    std::string arr[2] = {"makarna", "su"};
    iter(arr, 2, print2);
}