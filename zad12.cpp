//  Задание №12 Вводятся два целых числа. Проверить делится ли первое на второе. Вывести на
// экран сообщение об этом, а также остаток (если он есть) и частное (в любом
// случае).

#include<iostream>
int main(){
    int num1, num2;

    std::cout <<"Enter two integers: ";
    std::cin >> num1 >> num2;

    if (num2 == 0){
        std::cout <<"Division by zero is impossible!" << std::endl;
    }
    else {
        int quotient = num1 / num2;
        int remainder = num1 % num2;

        std::cout << "Quotient: " << quotient << std::endl;
        std::cout << "Remainder: " << remainder << std::endl;
    }

    return 0;
}
