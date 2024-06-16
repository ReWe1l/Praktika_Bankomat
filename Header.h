#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <vector>
#include <map>
#include <Windows.h>
using namespace std;

class BANC {
public:
    map<int, int> withdraw(int amount); // Метод withdraw класса BANC, возвращает map с целочисленными ключами и значениями, принимает один параметр - сумму для снятия.
};

int vivod();

#endif
