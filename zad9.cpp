// Задание №9 Сделать конвертер величин. Формат ввода: Направление_Перевода Величина. i) Время (неделя, час, сутки)
#include<iostream>
#include<string>

int main(){
    std::string direction;
    double value;

    // Ввод направления перевода и величины
    std::cout <<"Enter the transfer direction (week, hour, day): ";
    std::cin >> direction;
    std::cout <<"Enter value: ";
    std::cin >> value;

    // Перевод недель в часы и сутки
    if (direction == "Week") {
        double hours = value * 7 * 24;
        double days = value * 7;

        std::cout << value << "Week equals: " << hours << "hours or " << days << " day." << std::endl;
    }
    // Перевод часов в недели и сутки
    else if (direction == "hour"){
        double weeks = value / 7;
        double days = value / 24;

        std::cout << value << " hours equals " << weeks << " weeks or " << days << " day." << std::endl;
    }
    // Перевод суток в недели и часы
    else if (direction == "day"){
        double weeks = value / 7;
        double hours = value * 24;

        std::cout << value << " day equals " << weeks << " weeks or " << hours << " hours. " << std::endl;
    }
    // В случае некорректного ввода направления перевода
    else{
        std::cout << "Incorrect translation direction!" << std::endl;
    }

    return 0;

}

