﻿// 3.4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

//Записать условие, которое является истинным,
//когда точка с координатами х и у попадает в
//заштрихованную область.

#include <iostream>
#include <conio.h>

int main()
{
    setlocale(0, "ru");
    int x, y;
    bool k;
    std::cout << "Задана область, ограниченная линиями х и у: \n";
    std::cout << "Икс от (-) беск-ти до (+) беск-ти, а игрек -- от -2 до +1,5.\n";
    std::cout << "Введите координаты точки, чтобы узнать, попадает ли она в область: ";
    std::cin >> x >> y;
    k = (y >= -2 && y <= 1.5);
    if (k) {
        std::cout << "Введенная точка попала в заданную область.";
    }
    else {
        std::cout << "Координата игрек выходит за границы заданной области.";
    }
    _getch();
}