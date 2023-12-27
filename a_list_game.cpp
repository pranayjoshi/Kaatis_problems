#include <iostream>

int factors(int n)
{
    int factors = 0;
    int factor = 2;
    while (factor*factor <= n)
    {
        if (n % factor == 0)
        {
            n /= factor;
            factors++;
        }
        else
        {
            factor++;
        }
    }
    return factors + 1;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << factors(n);
    return 0;
}