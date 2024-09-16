#include <iostream>
#include <vector>

int main()
{
    /* TASK 4 OUTLINED BELOW */
    std::vector<int> fib;

    int numFib;
    std::cin >> numFib;

    if (numFib >= 1)
    {
        fib.push_back(0);
    }

    if (numFib >= 2)
    {
        fib.push_back(1);
    }

    for (int i = 2; i < numFib; i++)
    {
        int next_fib = fib[i - 1] + fib[i - 2];
        fib.push_back(next_fib);
    }

    std::cout << "Fibonacci numbers: ";
    for (int i = 0; i < numFib; i++)
    {
        std::cout << fib[i] << " ";
    }

    std::cout << std::endl;
}