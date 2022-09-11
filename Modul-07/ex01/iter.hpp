#pragma once
#include "iostream"

template<typename Type>
void    iter(Type *array, size_t len, void(*f)(Type const &))
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}
