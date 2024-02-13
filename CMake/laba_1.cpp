#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    short sh1 = 4;// 2 байта, -2^15...2^15-1 
    unsigned short sh2 = 4; // 2 байта, 0...2^16-1 

    int i1 = 4; // 4 байта, -2^31...2^31-1 
    unsigned int i2 = 5; // 4 байта, 0...2^32-1 

    long lo1 = 4; // 4 байта, -2^31...2^31-1 
    long long lo2 = 8; // 8 байта, -2^63...2^63-1 
    unsigned long long lo3 = 8; // 8 байта, 0...2^64-1 

    float f = 4; // 4 байта, 7 значащих цифр 
    double d = 8; // 8 байт, 15 значащих цифр

    int rad;
    std::cout << "Найдем длину окружности \n";
    std::cout << "Введите радиус: \n";
    std::cin >> rad;
    float pi = 3.1415;
    float len;
    len = 2 * pi * rad;
    std::cout << "Длина окружности равна: \n";
    std::cout << len;



    return 0;
}
