#include "Header.h"

map<int, int> BANC::withdraw(int amount) { // Метод withdraw класса BANC, возвращает map с целочисленными ключами и значениями, принимает один параметр - сумму для снятия.
    vector<int> denominations = { 5000, 1000, 100, 50, 10 }; // Создание вектора с номиналами купюр.
    map<int, int> result; // Создание map для хранения результата выдачи купюр.

    for (int denom : denominations) { // Цикл по номиналам.
        int count = amount / denom; // Вычисление количества купюр данного номинала.
        if (count > 0) { // Если количество больше нуля.
            result[denom] = count; // Записываем количество купюр данного номинала в map.
            amount %= denom; // Вычисляем остаток суммы после выдачи данных купюр.
        }
    }

    return result;
}