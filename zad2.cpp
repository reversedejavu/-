// Задание 2 (i) Пользователь вводит параметры фигуры. Найти периметр и площадь фигур: Правильный восьмиугольник
#include <iostream>
#include<cmath>

int main(){
    double sideLength;

    std::cout <<"Enter the side of the octagon: "; // Введём длину стороны правильного восьмиугольника
    std::cin >> sideLength;

    double perimetr = 8 * sideLength;
    double area = 2 * sideLength * sideLength * (1 + sqrt(2));

    std::cout << "Octagon perimeter :" << perimetr << std::endl; // Периметр правильного восьмиугольника
    std::cout << "Area of ​​a regular octagon:" << area << std::endl; // Площадь правильного восьмиугольника

    return 0;
}
