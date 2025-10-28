#pragma once
#include <vector>
#include <cmath>
#include <algorithm>

std::vector<unsigned long long> divisors(unsigned long long number)
{
    std::vector<unsigned long long> result;
    for (unsigned long long i = 1; i < std::sqrt(number); ++i)
    {
        if (number % i == 0)
        {
            result.push_back(i);
        }
    }
    for (unsigned long long i = std::sqrt(number); i > 0; --i)
    {
        if (number % i == 0)
        {
            result.push_back(number / i);
        }
    }
    return result;

}

