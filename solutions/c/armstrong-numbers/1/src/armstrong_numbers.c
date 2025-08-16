#include "armstrong_numbers.h"
#include <stdio.h>
// #include <math.h>

int ft_pow(int a, int b)
{
    int result = a;

    while (b > 1)
    {
        b--;
        result *= a;
    }
    // printf("power: %d ", result);
    return result;
}

bool is_armstrong_number(int candidate)
{
    int number = candidate;
    int digit = 0;
    int sum = 0;
    int power = 0;
    // candidate = 0;
    number = candidate;

    if (candidate == 0)
    {
        return 1;
    }
    while (number != 0)
    {
        power++;
        number = number / 10;
    }
    // printf("power:%d\n\n", power);
    number = candidate;
    while (number != 0)
    {
        digit = number % 10;
        // printf("digit: %d ", digit);
        // printf("exponent: %d ", power);
        digit = ft_pow(digit, power);
        // power++;
        sum += digit;
        // printf("sum: %d\n", sum);
        number = number / 10;
    }

    if (sum == candidate)
    {
        // printf("OK\n");
        return 1;
    }
    // printf("NO\n");
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int val = is_armstrong_number(153);
//     printf("val: %d\n", val);
//     return 0;
// }
