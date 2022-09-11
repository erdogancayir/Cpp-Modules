#pragma once
#include "iostream"

template<class Type>
void    swap(Type &a, Type &b)
{
    Type temp;
    temp = a;
    a = b;
    b = temp;
}

template<class Type>
Type    min(Type &a, Type &b)
{
    return (a < b ? a : b);
}

template<class Type>
Type    max(Type &a, Type &b)
{
    return (a > b ? a : b);
}
