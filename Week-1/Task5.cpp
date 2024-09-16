#include <iostream>
#include <vector>

int main()
{
    /* TASK 5 OUTLINED BELOW */
    std::vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(5);
    numbers.push_back(6);
    numbers.push_back(8);
    numbers.push_back(9);

    int target = 13;

    int L = 0;
    int R = numbers.size() - 1;

    while (L < R)
    {
        int sum = numbers[L] + numbers[R];
        if (sum == target)
        {
            std::cout << "Found at indices: " << L << " and " << R << std::endl;
            break;
        }
        else if (sum > target)
        {
            R--;
        }
        else
        {
            L++;
        }
    }
}