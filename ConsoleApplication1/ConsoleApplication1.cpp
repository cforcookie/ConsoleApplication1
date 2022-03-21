#include <iostream>
#include <string>
//Моудль суммы чисел до конкретного числа, принемает число до которого ведется счет
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
    int number; //Число до которого будет идти счет
    //Ввод числа 
    std::cout << "Write number to summ: ";
    std::cin >> number;
    int result = summ(number); //Присваивает результат вычисления функции 
    std::cout << "Result: " << result << std::endl; //Вывод результата на экран
    return 0;
}
