// Задача №8 Вычислите значение выражения: c. (x+1)2+3(x+1) при а) x=1.7; б) x=3. Ответ: а) 15.39 б) 28
#include <iostream>

int main(){
    // а) x = 1.7
    double x_a = 1.7;
    double result_a = (x_a + 1) * (x_a + 1) + 3 * (x_a + 1);

    std::cout << "Result for x = 1.7: " << result_a << std::endl;

    // б) x = 3
    int x_b = 3;
    int result_b = (x_b + 1) * (x_b + 1) + 3 * (x_b + 1);

    std::cout <<"Result for x = 3: " << result_b << std::endl;

    return 0;
}
