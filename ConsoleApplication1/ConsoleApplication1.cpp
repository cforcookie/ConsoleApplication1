#include <iostream>
#include <string>

int summ(int number)
{
    int start = 0;
    for (int i = 0; i < number; i++)
    {
        start = start + i;
    }
    return(start);
}

int main()
{
    int number;
    std::cout << "Write number to summ: ";
    std::cin >> number;
    int result = summ(number);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
