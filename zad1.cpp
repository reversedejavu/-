// Задание № 1 Вывести на экран Первую букву имени из символов "*" (звездочка)
#include<iostream>
int main(){
    std::string name="*"; // указываем имя
    char firstletter = name[0];
    std::cout <<"First letter of name: " <<firstletter <<std::endl;

    return 0;
}
