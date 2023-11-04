// Задача №7 Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого числа.
#include<iostream>

int main(){
    int number;

    std::cout << "Enter the number: ";
    std::cin >> number;

    int square = number * number;
    int cube = number * number * number;

    std::cout <<"Number square: " << square << std::endl;
    std::cout <<"Number cube: " << cube << std::endl;

    return 0;
}
